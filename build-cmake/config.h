/* config.h.  Generated from config_collected.h.cmake by CMake.
   It was generated from config_collected.h.cmake which in turn is generated automatically
   from the config.h.cmake files of modules this module depends on. */

/* Define to 1 if you have module dune-fem1d available */
#define HAVE_DUNE_FEM1D 1


/* Define to 1 if you have module dune-common available */
#define HAVE_DUNE_COMMON 1


/* Define to 1 if you have module dune-uggrid available */
#define HAVE_DUNE_UGGRID 1


/* Define to 1 if you have module dune-geometry available */
#define HAVE_DUNE_GEOMETRY 1


/* Define to 1 if you have module dune-typetree available */
#define HAVE_DUNE_TYPETREE 1


/* Define to 1 if you have module dune-istl available */
#define HAVE_DUNE_ISTL 1


/* Define to 1 if you have module dune-grid available */
#define HAVE_DUNE_GRID 1


/* Define to 1 if you have module dune-localfunctions available */
#define HAVE_DUNE_LOCALFUNCTIONS 1


/* Define to 1 if you have module dune-functions available */
#define HAVE_DUNE_FUNCTIONS 1


/* Define to the version of dune-common */
#define DUNE_COMMON_VERSION "2.7-git"

/* Define to the major version of dune-common */
#define DUNE_COMMON_VERSION_MAJOR 2

/* Define to the minor version of dune-common */
#define DUNE_COMMON_VERSION_MINOR 7

/* Define to the revision of dune-common */
#define DUNE_COMMON_VERSION_REVISION 0

/* Standard debug streams with a level below will collapse to doing nothing */
#define DUNE_MINIMAL_DEBUG_LEVEL 4

/* does the compiler support __attribute__((deprecated))? */
#define HAS_ATTRIBUTE_DEPRECATED 1

/* does the compiler support __attribute__((deprecated("message"))? */
#define HAS_ATTRIBUTE_DEPRECATED_MSG 1

/* does the compiler support __attribute__((unused))? */
#define HAS_ATTRIBUTE_UNUSED 1

/* does the compiler support C++17's class template argument deduction? */
/* #undef DUNE_HAVE_CXX_CLASS_TEMPLATE_ARGUMENT_DEDUCTION */

/* does the compiler support C++17's optional? */
/* #undef DUNE_HAVE_CXX_OPTIONAL */

/* does the compiler support conditionally throwing exceptions in constexpr context? */
/* #undef DUNE_SUPPORTS_CXX_THROW_IN_CONSTEXPR */

/* does the standard library provide <experimental/type_traits> ? */
#define DUNE_HAVE_HEADER_EXPERIMENTAL_TYPE_TRAITS 1

/* does the standard library provide make_unique() ? */
#define DUNE_HAVE_CXX_MAKE_UNIQUE 1

/* does the standard library provide bool_constant ? */
/* #undef DUNE_HAVE_CXX_BOOL_CONSTANT */

/* does the standard library provide experimental::bool_constant ? */
/* #undef DUNE_HAVE_CXX_EXPERIMENTAL_BOOL_CONSTANT */

/* does the standard library provide apply() ? */
/* #undef DUNE_HAVE_CXX_APPLY */

/* does the standard library provide experimental::apply() ? */
#define DUNE_HAVE_CXX_EXPERIMENTAL_APPLY 1

/* does the standard library provide experimental::make_array() ? */
/* #undef DUNE_HAVE_CXX_EXPERIMENTAL_MAKE_ARRAY */

/* does the standard library provide experimental::is_detected ? */
/* #undef DUNE_HAVE_CXX_EXPERIMENTAL_IS_DETECTED */

/* Define if you have a BLAS library. */
/* #undef HAVE_BLAS */

/* does the compiler support abi::__cxa_demangle */
#define HAVE_CXA_DEMANGLE 1

/* Define if you have LAPACK library. */
/* #undef HAVE_LAPACK */

/* Define to 1 if you have the <malloc.h> header file. */
// Not used! #define HAVE_MALLOC_H 0

/* Define if you have the MPI library.  */
#define HAVE_MPI ENABLE_MPI

/* Define if you have the GNU GMP library. The value should be ENABLE_GMP
   to facilitate activating and deactivating GMP using compile flags. */
/* #undef HAVE_GMP */

/* Define if you have the GCC Quad-Precision library. The value should be ENABLE_QUADMATH
   to facilitate activating and deactivating QuadMath using compile flags. */
#define HAVE_QUADMATH ENABLE_QUADMATH

/* Define if you have the Vc library. The value should be ENABLE_VC
   to facilitate activating and deactivating Vc using compile flags. */
/* #undef HAVE_VC */

/* Define to 1 if you have the symbol mprotect. */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have <sys/mman.h>. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the Threading Building Blocks (TBB) library */
/* #undef HAVE_TBB */



/* old feature support macros which were tested until 2.4, kept around for one more release */
/* As these are now always supported due to the new compiler requirements, they are directly */
/* defined without an explicit test. */
#define HAVE_NULLPTR 1
#define HAVE_CONSTEXPR 1
#define HAVE_RANGE_BASED_FOR 1
#define HAVE_NOEXCEPT_SPECIFIER 1
#define HAVE_STD_DECLVAL 1
#define HAVE_KEYWORD_FINAL 1
#define MPI_2 1

/* Define to 1 if the compiler properly supports testing for operator[] */
#define HAVE_IS_INDEXABLE_SUPPORT 1

/* Define to ENABLE_UMFPACK if the UMFPack library is available */
/* #undef HAVE_UMFPACK */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse library is available */
/* #undef HAVE_SUITESPARSE */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's AMD library is available */
/* #undef HAVE_SUITESPARSE_AMD */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's BTF library is available */
/* #undef HAVE_SUITESPARSE_BTF */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's CAMD library is available */
/* #undef HAVE_SUITESPARSE_CAMD */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's CCOLAMD library is available */
/* #undef HAVE_SUITESPARSE_CCOLAMD */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's CHOLMOD library is available */
/* #undef HAVE_SUITESPARSE_CHOLMOD */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's COLAMD library is available */
/* #undef HAVE_SUITESPARSE_COLAMD */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's CXSPARSE library is available */
/* #undef HAVE_SUITESPARSE_CXSPARSE */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's KLU library is available */
/* #undef HAVE_SUITESPARSE_KLU */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's LDL library is available */
/* #undef HAVE_SUITESPARSE_LDL */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's RBIO library is available */
/* #undef HAVE_SUITESPARSE_RBIO */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's SPQR library is available
   and if it's version is at least 4.3 */
/* #undef HAVE_SUITESPARSE_SPQR */

/* Define to ENABLE_SUITESPARSE if the SuiteSparse's UMFPACK library is available */
/* #undef HAVE_SUITESPARSE_UMFPACK */

/* Define to 1 if METIS is available */
/* #undef HAVE_METIS */


/* Define to ENABLE_PARMETIS if you have the Parmetis library.
   This is only true if MPI was found
   by configure _and_ if the application uses the PARMETIS_CPPFLAGS */
/* #undef HAVE_PARMETIS */

/* Define to 1 if PT-Scotch is available */
/* #undef HAVE_PTSCOTCH */

/* Include always useful headers */
#include "FC.h"
#define FC_FUNC FC_GLOBAL_



/* Define to the version of dune-common */
#define DUNE_UGGRID_VERSION "2.7-git"

/* Define to the major version of dune-common */
#define DUNE_UGGRID_VERSION_MAJOR 2

/* Define to the minor version of dune-common */
#define DUNE_UGGRID_VERSION_MINOR 7

/* Define to the revision of dune-common */
#define DUNE_UGGRID_VERSION_REVISION 0

/* begin private section */

/* see parallel/ddd/dddi.h */
/* #undef DDD_MAX_PROCBITS_IN_GID */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Define to 1 if UGGrid should use the complete set of green refinement rules for tetrahedra */
/* #undef TET_RULESET */

/* Define to 1 if rpc/rpc.h is found (needed for xdr). */
#ifndef HAVE_RPC_RPC_H
#define HAVE_RPC_RPC_H 1
#endif

/* end private section */





/* Define to the version of dune-geometry */
#define DUNE_GEOMETRY_VERSION "2.7-git"

/* Define to the major version of dune-geometry */
#define DUNE_GEOMETRY_VERSION_MAJOR 2

/* Define to the minor version of dune-geometry */
#define DUNE_GEOMETRY_VERSION_MINOR 7

/* Define to the revision of dune-geometry */
#define DUNE_GEOMETRY_VERSION_REVISION 0





/* Define to the version of dune-typetree */
#define DUNE_TYPETREE_VERSION "2.7-git"

/* Define to the major version of dune-typetree */
#define DUNE_TYPETREE_VERSION_MAJOR 2

/* Define to the minor version of dune-typetree */
#define DUNE_TYPETREE_VERSION_MINOR 7

/* Define to the revision of dune-typetree */
#define DUNE_TYPETREE_VERSION_REVISION 0






/* Define to ENABLE_SUPERLU if the SuperLU library is available */
/* #undef HAVE_SUPERLU */

/* Define to the integer type that SuperLU was compiled for
   See e.g. what int_t is defined to in slu_sdefs.h */
#define SUPERLU_INT_TYPE int

/* Define to 1 if header slu_sdefs.h is there. */
#define HAVE_SLU_SDEFS_H 0

/* Define to 1 if header slu_ddefs.h is there. */
#define HAVE_SLU_DDEFS_H 0

/* Define to 1 if header slu_cdefs.h is there. */
#define HAVE_SLU_CDEFS_H 0

/* Define to 1 if header slu_zdefs.h is there. */
#define HAVE_SLU_ZDEFS_H 0

/* Define to ENABLE_ARPACKPP if the ARPACK++ library is available */
/* #undef HAVE_ARPACKPP */

/* Define to 0 as all versions since SuperLu 4.0 do no longer provide it that way. */
#define HAVE_MEM_USAGE_T_EXPANSIONS 1

/* define to 1 if SuperLU header slu_ddefs.h contains SLU_DOUBLE */
/* #undef SUPERLU_MIN_VERSION_4_3 */

/* define to 1 if SuperLU dgssvx takes a GlobalLU_t parameter */
/* #undef SUPERLU_MIN_VERSION_5 */

/* Define to the version of dune-istl */
#define DUNE_ISTL_VERSION "2.7-git"

/* Define to the major version of dune-istl */
#define DUNE_ISTL_VERSION_MAJOR 2

/* Define to the minor version of dune-istl */
#define DUNE_ISTL_VERSION_MINOR 7

/* Define to the revision of dune-istl */
#define DUNE_ISTL_VERSION_REVISION 0

/* Enable/Disable the backwards compatibility of the category enum/method in dune-istl solvers, preconditioner, etc. */
#define DUNE_ISTL_SUPPORT_OLD_CATEGORY_INTERFACE 1





/* Define to the version of dune-grid */
#define DUNE_GRID_VERSION "2.7-git"

/* Define to the major version of dune-grid */
#define DUNE_GRID_VERSION_MAJOR 2

/* Define to the minor version of dune-grid */
#define DUNE_GRID_VERSION_MINOR 7

/* Define to the revision of dune-grid */
#define DUNE_GRID_VERSION_REVISION 0

/* If this is set, public access to the implementation of facades like Entity, Geometry, etc. is granted. (deprecated) */
#define DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS 1

/* Define to 1 if psurface library is found */
/* #undef HAVE_PSURFACE */

/* Define to 1 if AmiraMesh library is found */
/* #undef HAVE_AMIRAMESH */

/* The namespace prefix of the psurface library (deprecated) */
#define PSURFACE_NAMESPACE psurface::

/* Define to 1 if you have at least psurface version 2.0 */
/* #undef HAVE_PSURFACE_2_0 */

/* Alberta version found by configure, either 0x200 for 2.0 or 0x300 for 3.0 */
/* #undef DUNE_ALBERTA_VERSION */

/* This is only true if alberta-library was found by configure _and_ if the
   application uses the ALBERTA_CPPFLAGS */
/* #undef HAVE_ALBERTA */

/* This is only true if UG was found by configure _and_ if the application
   uses the UG_CPPFLAGS */
#define HAVE_UG ENABLE_UG

/* Define to 1 if you have mkstemp function */
#define HAVE_MKSTEMP 1







/* Define to the version of dune-localfunctions */
#define DUNE_LOCALFUNCTIONS_VERSION "2.7-git"

/* Define to the major version of dune-localfunctions */
#define DUNE_LOCALFUNCTIONS_VERSION_MAJOR 2

/* Define to the minor version of dune-localfunctions */
#define DUNE_LOCALFUNCTIONS_VERSION_MINOR 7

/* Define to the revision of dune-localfunctions */
#define DUNE_LOCALFUNCTIONS_VERSION_REVISION 0






/* Define to the version of dune-functions */
#define DUNE_FUNCTIONS_VERSION "2.7-git"

/* Define to the major version of dune-functions */
#define DUNE_FUNCTIONS_VERSION_MAJOR 2

/* Define to the minor version of dune-functions */
#define DUNE_FUNCTIONS_VERSION_MINOR 7

/* Define to the revision of dune-functions */
#define DUNE_FUNCTIONS_VERSION_REVISION 0



/* begin dune-fem1d
   put the definitions for config.h specific to
   your project here. Everything above will be
   overwritten
*/

/* begin private */
/* Name of package */
#define PACKAGE "dune-fem1d"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "nageswararao.160324@gmail.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "dune-fem1d"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dune-fem1d 1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dune-fem1d"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0"

/* end private */

/* Define to the version of dune-fem1d */
#define DUNE_FEM1D_VERSION "1.0"

/* Define to the major version of dune-fem1d */
#define DUNE_FEM1D_VERSION_MAJOR 1

/* Define to the minor version of dune-fem1d */
#define DUNE_FEM1D_VERSION_MINOR 0

/* Define to the revision of dune-fem1d */
#define DUNE_FEM1D_VERSION_REVISION 0

/* end dune-fem1d
   Everything below here will be overwritten
*/ 

/* Grid type magic for DGF parser */

/* UGGRID not available, enable with cmake variable DUNE_GRID_GRIDTYPE_SELECTOR=ON */
/* ONEDGRID not available, enable with cmake variable DUNE_GRID_GRIDTYPE_SELECTOR=ON */
/* YASPGRID not available, enable with cmake variable DUNE_GRID_GRIDTYPE_SELECTOR=ON */

