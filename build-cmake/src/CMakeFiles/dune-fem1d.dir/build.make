# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/munna/dune/dune-2.6.0/dune-fem1d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake

# Include any dependencies generated for this target.
include src/CMakeFiles/dune-fem1d.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/dune-fem1d.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/dune-fem1d.dir/flags.make

src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o: src/CMakeFiles/dune-fem1d.dir/flags.make
src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o: ../src/dune-fem1d.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o"
	cd /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o -c /home/munna/dune/dune-2.6.0/dune-fem1d/src/dune-fem1d.cc

src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.i"
	cd /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/munna/dune/dune-2.6.0/dune-fem1d/src/dune-fem1d.cc > CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.i

src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.s"
	cd /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/munna/dune/dune-2.6.0/dune-fem1d/src/dune-fem1d.cc -o CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.s

src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.requires:

.PHONY : src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.requires

src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.provides: src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.requires
	$(MAKE) -f src/CMakeFiles/dune-fem1d.dir/build.make src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.provides.build
.PHONY : src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.provides

src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.provides.build: src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o


# Object files for target dune-fem1d
dune__fem1d_OBJECTS = \
"CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o"

# External object files for target dune-fem1d
dune__fem1d_EXTERNAL_OBJECTS =

src/dune-fem1d: src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o
src/dune-fem1d: src/CMakeFiles/dune-fem1d.dir/build.make
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-grid/build-cmake/lib/libdunegrid.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-geometry/build-cmake/lib/libdunegeometry.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugS3.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugS2.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugL.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-common/build-cmake/lib/libdunecommon.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-grid/build-cmake/lib/libdunegrid.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-geometry/build-cmake/lib/libdunegeometry.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugS3.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugS2.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugL.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-common/build-cmake/lib/libdunecommon.a
src/dune-fem1d: /usr/lib/x86_64-linux-gnu/libmpich.so
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-grid/build-cmake/lib/libdunegrid.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-geometry/build-cmake/lib/libdunegeometry.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugS3.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugS2.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-uggrid/build-cmake/lib/libugL.a
src/dune-fem1d: /home/munna/dune/dune-2.6.0/dune-common/build-cmake/lib/libdunecommon.a
src/dune-fem1d: /usr/lib/x86_64-linux-gnu/libmpich.so
src/dune-fem1d: src/CMakeFiles/dune-fem1d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dune-fem1d"
	cd /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dune-fem1d.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/dune-fem1d.dir/build: src/dune-fem1d

.PHONY : src/CMakeFiles/dune-fem1d.dir/build

src/CMakeFiles/dune-fem1d.dir/requires: src/CMakeFiles/dune-fem1d.dir/dune-fem1d.cc.o.requires

.PHONY : src/CMakeFiles/dune-fem1d.dir/requires

src/CMakeFiles/dune-fem1d.dir/clean:
	cd /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src && $(CMAKE_COMMAND) -P CMakeFiles/dune-fem1d.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/dune-fem1d.dir/clean

src/CMakeFiles/dune-fem1d.dir/depend:
	cd /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/munna/dune/dune-2.6.0/dune-fem1d /home/munna/dune/dune-2.6.0/dune-fem1d/src /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src /home/munna/dune/dune-2.6.0/dune-fem1d/build-cmake/src/CMakeFiles/dune-fem1d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/dune-fem1d.dir/depend
