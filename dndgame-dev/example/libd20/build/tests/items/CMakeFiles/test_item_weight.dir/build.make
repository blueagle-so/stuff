# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /root/c/libd20

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/c/libd20/build

# Include any dependencies generated for this target.
include tests/items/CMakeFiles/test_item_weight.dir/depend.make

# Include the progress variables for this target.
include tests/items/CMakeFiles/test_item_weight.dir/progress.make

# Include the compile flags for this target's objects.
include tests/items/CMakeFiles/test_item_weight.dir/flags.make

tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o: tests/items/CMakeFiles/test_item_weight.dir/flags.make
tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o: ../tests/items/test_item_weight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/c/libd20/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o"
	cd /root/c/libd20/build/tests/items && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o -c /root/c/libd20/tests/items/test_item_weight.cpp

tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_item_weight.dir/test_item_weight.cpp.i"
	cd /root/c/libd20/build/tests/items && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/c/libd20/tests/items/test_item_weight.cpp > CMakeFiles/test_item_weight.dir/test_item_weight.cpp.i

tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_item_weight.dir/test_item_weight.cpp.s"
	cd /root/c/libd20/build/tests/items && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/c/libd20/tests/items/test_item_weight.cpp -o CMakeFiles/test_item_weight.dir/test_item_weight.cpp.s

tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.requires:

.PHONY : tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.requires

tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.provides: tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.requires
	$(MAKE) -f tests/items/CMakeFiles/test_item_weight.dir/build.make tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.provides.build
.PHONY : tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.provides

tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.provides.build: tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o


# Object files for target test_item_weight
test_item_weight_OBJECTS = \
"CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o"

# External object files for target test_item_weight
test_item_weight_EXTERNAL_OBJECTS =

tests/items/test_item_weight: tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o
tests/items/test_item_weight: tests/items/CMakeFiles/test_item_weight.dir/build.make
tests/items/test_item_weight: libd20.so
tests/items/test_item_weight: tests/items/CMakeFiles/test_item_weight.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/c/libd20/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_item_weight"
	cd /root/c/libd20/build/tests/items && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_item_weight.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/items/CMakeFiles/test_item_weight.dir/build: tests/items/test_item_weight

.PHONY : tests/items/CMakeFiles/test_item_weight.dir/build

tests/items/CMakeFiles/test_item_weight.dir/requires: tests/items/CMakeFiles/test_item_weight.dir/test_item_weight.cpp.o.requires

.PHONY : tests/items/CMakeFiles/test_item_weight.dir/requires

tests/items/CMakeFiles/test_item_weight.dir/clean:
	cd /root/c/libd20/build/tests/items && $(CMAKE_COMMAND) -P CMakeFiles/test_item_weight.dir/cmake_clean.cmake
.PHONY : tests/items/CMakeFiles/test_item_weight.dir/clean

tests/items/CMakeFiles/test_item_weight.dir/depend:
	cd /root/c/libd20/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/c/libd20 /root/c/libd20/tests/items /root/c/libd20/build /root/c/libd20/build/tests/items /root/c/libd20/build/tests/items/CMakeFiles/test_item_weight.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/items/CMakeFiles/test_item_weight.dir/depend

