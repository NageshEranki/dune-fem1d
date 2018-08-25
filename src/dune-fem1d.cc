// -*- tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
// vi: set et ts=4 sw=2 sts=2:

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif
//std includes
#include <iostream>
#include <vector>
#include <cmath>
//dune-common includes
#include <dune/common/parallel/mpihelper.hh> // An initializer of MPI
#include <dune/common/exceptions.hh> // We use exceptions
//dune-grid includes
#include <dune/grid/yaspgrid.hh>
//dune-localfunctions includes
#include <dune/localfunctions/lagrange/q1.hh>
//dune-geometry includes
#include <dune/geometry/quadraturerules.hh>
//dune-istl includes
#include <dune/istl/matrix.hh>
#include <dune/istl/bcrsmatrix.hh>
#include <dune/istl/bvector.hh>
#include <dune/istl/matrixindexset.hh>
#include <dune/istl/io.hh>

int main(int argc, char** argv)
{
  try{
    // Maybe initialize MPI
    Dune::MPIHelper& helper = Dune::MPIHelper::instance(argc, argv);

    const int dim = 1;

    //Grid and leaf view instantiation.
    typedef Dune::YaspGrid<dim> Grid;
    typedef Grid::LeafGridView GV;

    Grid grid({10,0},{10});
    GV gv = grid.leafGridView();
    const auto& index_set = gv.indexSet();
    //

    //Source term definition.
    auto f = [](const auto& x){ return 2*x ;};
    //

    //Instantiation of basis functions on refelem
    using LFE = Dune::Q1LocalFiniteElement<double,double,dim>;
    LFE lfe;

    using LocalBasisType =  LFE::Traits::LocalBasisType;
    LocalBasisType basis = lfe.localBasis();

    using RangeType = LocalBasisType::Traits::RangeType;
    using DomainType = LocalBasisType::Traits::DomainType;
    //

    //Define Matrix and Vector types
    typedef Dune::BCRSMatrix<Dune::FieldMatrix<double,1,1> > Matrix;
    typedef Dune::BlockVector<Dune::FieldVector<double,1> > Vector;

    Matrix stiffnessMatrix;
    Vector loadVector;
    //

    //Resize global stiffness matrix and load vector.
    stiffnessMatrix.setSize(gv.size(dim),gv.size(dim));
    loadVector.resize(gv.size(dim));
    //

    //Instantiate MatrixIndexSet.
    Dune::MatrixIndexSet mis;
    //

    //Impose structure on BCRSMatrix.
    mis.resize(gv.size(dim),gv.size(dim));
    for(const auto& cell:elements(gv))
    {
      for(int i=0;i < cell.geometry().corners(); i++)
      {
        auto row = index_set.subIndex(cell,dim,i);
        for(int j=0;j<cell.geometry().corners();j++)
        {
          auto col = index_set.subIndex(cell,dim,j);
          mis.add(row,col);
        }
      }
    }
    mis.exportIdx(stiffnessMatrix);
    //We can now access elements using [] operator.

    //Initialize stiffnes matrix and load vector.
    stiffnessMatrix = 0.0;
    loadVector = 0.0;
    //

    //Extract quadrature rules based on reference geometry.
    auto it = gv.template begin<0>();
    auto gt = it->type();
    const auto QuadRule = Dune::QuadratureRules<double,dim>::rule(gt,2);
    //

    //Assemble global stiffness matrix and load vector (w/o assembling constraints);
    for(const auto& cell: elements(gv))
    {
      auto geo = cell.geometry();
      for(const auto& qp: QuadRule)
      {
        std::vector<LocalBasisType::Traits::JacobianType > referenceGrad;
        basis.evaluateJacobian(qp.position(),referenceGrad);

        const auto jacobian = geo.jacobianInverseTransposed(qp.position());

        std::vector<LocalBasisType::Traits::JacobianType > gradients(referenceGrad.size());
        for(int i =0; i < gradients.size(); i++)
        {
          jacobian.mv(referenceGrad[i],gradients[i]);
        }

        //Assemble element stiffness matrix into global stiffness matrix.
        auto id = index_set.index(cell);
        for(int i=0; i<geo.corners(); i++)
        {
          for(int j=0; j<geo.corners(); j++)
          {
            stiffnessMatrix[id+i][id+j] += gradients[i] * gradients[j] * qp.weight() * geo.integrationElement(qp.position());
          }
        }
      }

    }
    Dune::printmatrix(std::cout,stiffnessMatrix,"Stiffness Matrix", "row");

    // for(const auto& cell: elements(gv))
    // {
    //   auto geo = cell.geometry();
    //   for(const auto& qp: QuadRule)
    //   {
    //     result += qp.weight()*f(geo.global(qp.position()))*geo.integrationElement(qp.position());
    //   }
    // }

    return 0;
  }
  catch (Dune::Exception &e){
    std::cerr << "Dune reported error: " << e << std::endl;
  }
  catch (...){
    std::cerr << "Unknown exception thrown!" << std::endl;
  }
}
