if(NOT dune-fem1d_FOUND)
# Whether this module is installed or not
set(dune-fem1d_INSTALLED OFF)

# Settings specific to the module

# Package initialization
# Set prefix to source dir
set(PACKAGE_PREFIX_DIR /home/munna/dune/dune-2.6.0/dune-fem1d)
macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

#report other information
set_and_check(dune-fem1d_PREFIX "${PACKAGE_PREFIX_DIR}")
set_and_check(dune-fem1d_INCLUDE_DIRS "/home/munna/dune/dune-2.6.0/dune-fem1d")
set(dune-fem1d_CXX_FLAGS "-std=c++14 -DNDEBUG -O3 -ffast-math")
set(dune-fem1d_CXX_FLAGS_DEBUG "-g")
set(dune-fem1d_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG")
set(dune-fem1d_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
set(dune-fem1d_CXX_FLAGS_RELWITHDEBINFO "-O2 -g -DNDEBUG")
set(dune-fem1d_DEPENDS "dune-common;dune-geometry;dune-uggrid;dune-grid;dune-istl;dune-localfunctions;dune-typetree;dune-functions")
set(dune-fem1d_SUGGESTS "")
set(dune-fem1d_MODULE_PATH "/home/munna/dune/dune-2.6.0/dune-fem1d/cmake/modules")
set(dune-fem1d_LIBRARIES "")

# Lines that are set by the CMake build system via the variable DUNE_CUSTOM_PKG_CONFIG_SECTION


#import the target
if(dune-fem1d_LIBRARIES)
  get_filename_component(_dir "${CMAKE_CURRENT_LIST_FILE}" PATH)
  include("${_dir}/dune-fem1d-targets.cmake")
endif()
endif()
