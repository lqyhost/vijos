# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/qianyongliu/code/git/vijos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qianyongliu/code/git/vijos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Vijos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Vijos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vijos.dir/flags.make

CMakeFiles/Vijos.dir/1449/main.cpp.o: CMakeFiles/Vijos.dir/flags.make
CMakeFiles/Vijos.dir/1449/main.cpp.o: ../1449/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qianyongliu/code/git/vijos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Vijos.dir/1449/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vijos.dir/1449/main.cpp.o -c /Users/qianyongliu/code/git/vijos/1449/main.cpp

CMakeFiles/Vijos.dir/1449/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vijos.dir/1449/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qianyongliu/code/git/vijos/1449/main.cpp > CMakeFiles/Vijos.dir/1449/main.cpp.i

CMakeFiles/Vijos.dir/1449/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vijos.dir/1449/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qianyongliu/code/git/vijos/1449/main.cpp -o CMakeFiles/Vijos.dir/1449/main.cpp.s

CMakeFiles/Vijos.dir/1449/main.cpp.o.requires:

.PHONY : CMakeFiles/Vijos.dir/1449/main.cpp.o.requires

CMakeFiles/Vijos.dir/1449/main.cpp.o.provides: CMakeFiles/Vijos.dir/1449/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Vijos.dir/build.make CMakeFiles/Vijos.dir/1449/main.cpp.o.provides.build
.PHONY : CMakeFiles/Vijos.dir/1449/main.cpp.o.provides

CMakeFiles/Vijos.dir/1449/main.cpp.o.provides.build: CMakeFiles/Vijos.dir/1449/main.cpp.o


# Object files for target Vijos
Vijos_OBJECTS = \
"CMakeFiles/Vijos.dir/1449/main.cpp.o"

# External object files for target Vijos
Vijos_EXTERNAL_OBJECTS =

Vijos: CMakeFiles/Vijos.dir/1449/main.cpp.o
Vijos: CMakeFiles/Vijos.dir/build.make
Vijos: CMakeFiles/Vijos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qianyongliu/code/git/vijos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Vijos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vijos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vijos.dir/build: Vijos

.PHONY : CMakeFiles/Vijos.dir/build

CMakeFiles/Vijos.dir/requires: CMakeFiles/Vijos.dir/1449/main.cpp.o.requires

.PHONY : CMakeFiles/Vijos.dir/requires

CMakeFiles/Vijos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Vijos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Vijos.dir/clean

CMakeFiles/Vijos.dir/depend:
	cd /Users/qianyongliu/code/git/vijos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qianyongliu/code/git/vijos /Users/qianyongliu/code/git/vijos /Users/qianyongliu/code/git/vijos/cmake-build-debug /Users/qianyongliu/code/git/vijos/cmake-build-debug /Users/qianyongliu/code/git/vijos/cmake-build-debug/CMakeFiles/Vijos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Vijos.dir/depend

