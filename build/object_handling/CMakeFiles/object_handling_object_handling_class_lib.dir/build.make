# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/alston/Panda-Object-Handling/src/object_handling

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alston/Panda-Object-Handling/build/object_handling

# Include any dependencies generated for this target.
include CMakeFiles/object_handling_object_handling_class_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/object_handling_object_handling_class_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/object_handling_object_handling_class_lib.dir/flags.make

CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.o: CMakeFiles/object_handling_object_handling_class_lib.dir/flags.make
CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.o: /home/alston/Panda-Object-Handling/src/object_handling/src/object_handling_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alston/Panda-Object-Handling/build/object_handling/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.o -c /home/alston/Panda-Object-Handling/src/object_handling/src/object_handling_class.cpp

CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alston/Panda-Object-Handling/src/object_handling/src/object_handling_class.cpp > CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.i

CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alston/Panda-Object-Handling/src/object_handling/src/object_handling_class.cpp -o CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.s

# Object files for target object_handling_object_handling_class_lib
object_handling_object_handling_class_lib_OBJECTS = \
"CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.o"

# External object files for target object_handling_object_handling_class_lib
object_handling_object_handling_class_lib_EXTERNAL_OBJECTS =

/home/alston/Panda-Object-Handling/devel/.private/object_handling/lib/libobject_handling_object_handling_class_lib.so: CMakeFiles/object_handling_object_handling_class_lib.dir/src/object_handling_class.cpp.o
/home/alston/Panda-Object-Handling/devel/.private/object_handling/lib/libobject_handling_object_handling_class_lib.so: CMakeFiles/object_handling_object_handling_class_lib.dir/build.make
/home/alston/Panda-Object-Handling/devel/.private/object_handling/lib/libobject_handling_object_handling_class_lib.so: CMakeFiles/object_handling_object_handling_class_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alston/Panda-Object-Handling/build/object_handling/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/alston/Panda-Object-Handling/devel/.private/object_handling/lib/libobject_handling_object_handling_class_lib.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/object_handling_object_handling_class_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/object_handling_object_handling_class_lib.dir/build: /home/alston/Panda-Object-Handling/devel/.private/object_handling/lib/libobject_handling_object_handling_class_lib.so

.PHONY : CMakeFiles/object_handling_object_handling_class_lib.dir/build

CMakeFiles/object_handling_object_handling_class_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/object_handling_object_handling_class_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/object_handling_object_handling_class_lib.dir/clean

CMakeFiles/object_handling_object_handling_class_lib.dir/depend:
	cd /home/alston/Panda-Object-Handling/build/object_handling && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alston/Panda-Object-Handling/src/object_handling /home/alston/Panda-Object-Handling/src/object_handling /home/alston/Panda-Object-Handling/build/object_handling /home/alston/Panda-Object-Handling/build/object_handling /home/alston/Panda-Object-Handling/build/object_handling/CMakeFiles/object_handling_object_handling_class_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/object_handling_object_handling_class_lib.dir/depend

