# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/miriam/.local/lib/python3.11/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/miriam/.local/lib/python3.11/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/miriam/CLionProjects/agendaProgrammazione

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miriam/CLionProjects/agendaProgrammazione

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/home/miriam/.local/lib/python3.11/site-packages/cmake/data/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test
.PHONY : test/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/home/miriam/.local/lib/python3.11/site-packages/cmake/data/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/miriam/.local/lib/python3.11/site-packages/cmake/data/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/miriam/CLionProjects/agendaProgrammazione/CMakeFiles /home/miriam/CLionProjects/agendaProgrammazione//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/miriam/CLionProjects/agendaProgrammazione/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named agendaProgrammazione

# Build rule for target.
agendaProgrammazione: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 agendaProgrammazione
.PHONY : agendaProgrammazione

# fast build rule for target.
agendaProgrammazione/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/build
.PHONY : agendaProgrammazione/fast

#=============================================================================
# Target rules for targets named agendaProgrammazione_test

# Build rule for target.
agendaProgrammazione_test: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 agendaProgrammazione_test
.PHONY : agendaProgrammazione_test

# fast build rule for target.
agendaProgrammazione_test/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/build
.PHONY : agendaProgrammazione_test/fast

#=============================================================================
# Target rules for targets named agendaProgrammazione_autogen

# Build rule for target.
agendaProgrammazione_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 agendaProgrammazione_autogen
.PHONY : agendaProgrammazione_autogen

# fast build rule for target.
agendaProgrammazione_autogen/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_autogen.dir/build.make CMakeFiles/agendaProgrammazione_autogen.dir/build
.PHONY : agendaProgrammazione_autogen/fast

#=============================================================================
# Target rules for targets named agendaProgrammazione_test_autogen

# Build rule for target.
agendaProgrammazione_test_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 agendaProgrammazione_test_autogen
.PHONY : agendaProgrammazione_test_autogen

# fast build rule for target.
agendaProgrammazione_test_autogen/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test_autogen.dir/build.make CMakeFiles/agendaProgrammazione_test_autogen.dir/build
.PHONY : agendaProgrammazione_test_autogen/fast

agendaProgrammazione_autogen/mocs_compilation.o: agendaProgrammazione_autogen/mocs_compilation.cpp.o
.PHONY : agendaProgrammazione_autogen/mocs_compilation.o

# target to build an object file
agendaProgrammazione_autogen/mocs_compilation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/agendaProgrammazione_autogen/mocs_compilation.cpp.o
.PHONY : agendaProgrammazione_autogen/mocs_compilation.cpp.o

agendaProgrammazione_autogen/mocs_compilation.i: agendaProgrammazione_autogen/mocs_compilation.cpp.i
.PHONY : agendaProgrammazione_autogen/mocs_compilation.i

# target to preprocess a source file
agendaProgrammazione_autogen/mocs_compilation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/agendaProgrammazione_autogen/mocs_compilation.cpp.i
.PHONY : agendaProgrammazione_autogen/mocs_compilation.cpp.i

agendaProgrammazione_autogen/mocs_compilation.s: agendaProgrammazione_autogen/mocs_compilation.cpp.s
.PHONY : agendaProgrammazione_autogen/mocs_compilation.s

# target to generate assembly for a file
agendaProgrammazione_autogen/mocs_compilation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/agendaProgrammazione_autogen/mocs_compilation.cpp.s
.PHONY : agendaProgrammazione_autogen/mocs_compilation.cpp.s

agendaProgrammazione_test_autogen/mocs_compilation.o: agendaProgrammazione_test_autogen/mocs_compilation.cpp.o
.PHONY : agendaProgrammazione_test_autogen/mocs_compilation.o

# target to build an object file
agendaProgrammazione_test_autogen/mocs_compilation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/agendaProgrammazione_test_autogen/mocs_compilation.cpp.o
.PHONY : agendaProgrammazione_test_autogen/mocs_compilation.cpp.o

agendaProgrammazione_test_autogen/mocs_compilation.i: agendaProgrammazione_test_autogen/mocs_compilation.cpp.i
.PHONY : agendaProgrammazione_test_autogen/mocs_compilation.i

# target to preprocess a source file
agendaProgrammazione_test_autogen/mocs_compilation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/agendaProgrammazione_test_autogen/mocs_compilation.cpp.i
.PHONY : agendaProgrammazione_test_autogen/mocs_compilation.cpp.i

agendaProgrammazione_test_autogen/mocs_compilation.s: agendaProgrammazione_test_autogen/mocs_compilation.cpp.s
.PHONY : agendaProgrammazione_test_autogen/mocs_compilation.s

# target to generate assembly for a file
agendaProgrammazione_test_autogen/mocs_compilation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/agendaProgrammazione_test_autogen/mocs_compilation.cpp.s
.PHONY : agendaProgrammazione_test_autogen/mocs_compilation.cpp.s

src/Activity.o: src/Activity.cpp.o
.PHONY : src/Activity.o

# target to build an object file
src/Activity.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Activity.cpp.o
.PHONY : src/Activity.cpp.o

src/Activity.i: src/Activity.cpp.i
.PHONY : src/Activity.i

# target to preprocess a source file
src/Activity.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Activity.cpp.i
.PHONY : src/Activity.cpp.i

src/Activity.s: src/Activity.cpp.s
.PHONY : src/Activity.s

# target to generate assembly for a file
src/Activity.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Activity.cpp.s
.PHONY : src/Activity.cpp.s

src/ActivityController.o: src/ActivityController.cpp.o
.PHONY : src/ActivityController.o

# target to build an object file
src/ActivityController.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/ActivityController.cpp.o
.PHONY : src/ActivityController.cpp.o

src/ActivityController.i: src/ActivityController.cpp.i
.PHONY : src/ActivityController.i

# target to preprocess a source file
src/ActivityController.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/ActivityController.cpp.i
.PHONY : src/ActivityController.cpp.i

src/ActivityController.s: src/ActivityController.cpp.s
.PHONY : src/ActivityController.s

# target to generate assembly for a file
src/ActivityController.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/ActivityController.cpp.s
.PHONY : src/ActivityController.cpp.s

src/ActivityWidget.o: src/ActivityWidget.cpp.o
.PHONY : src/ActivityWidget.o

# target to build an object file
src/ActivityWidget.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/ActivityWidget.cpp.o
.PHONY : src/ActivityWidget.cpp.o

src/ActivityWidget.i: src/ActivityWidget.cpp.i
.PHONY : src/ActivityWidget.i

# target to preprocess a source file
src/ActivityWidget.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/ActivityWidget.cpp.i
.PHONY : src/ActivityWidget.cpp.i

src/ActivityWidget.s: src/ActivityWidget.cpp.s
.PHONY : src/ActivityWidget.s

# target to generate assembly for a file
src/ActivityWidget.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/ActivityWidget.cpp.s
.PHONY : src/ActivityWidget.cpp.s

src/Board.o: src/Board.cpp.o
.PHONY : src/Board.o

# target to build an object file
src/Board.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Board.cpp.o
.PHONY : src/Board.cpp.o

src/Board.i: src/Board.cpp.i
.PHONY : src/Board.i

# target to preprocess a source file
src/Board.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Board.cpp.i
.PHONY : src/Board.cpp.i

src/Board.s: src/Board.cpp.s
.PHONY : src/Board.s

# target to generate assembly for a file
src/Board.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Board.cpp.s
.PHONY : src/Board.cpp.s

src/BoardController.o: src/BoardController.cpp.o
.PHONY : src/BoardController.o

# target to build an object file
src/BoardController.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/BoardController.cpp.o
.PHONY : src/BoardController.cpp.o

src/BoardController.i: src/BoardController.cpp.i
.PHONY : src/BoardController.i

# target to preprocess a source file
src/BoardController.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/BoardController.cpp.i
.PHONY : src/BoardController.cpp.i

src/BoardController.s: src/BoardController.cpp.s
.PHONY : src/BoardController.s

# target to generate assembly for a file
src/BoardController.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/BoardController.cpp.s
.PHONY : src/BoardController.cpp.s

src/Date.o: src/Date.cpp.o
.PHONY : src/Date.o

# target to build an object file
src/Date.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Date.cpp.o
.PHONY : src/Date.cpp.o

src/Date.i: src/Date.cpp.i
.PHONY : src/Date.i

# target to preprocess a source file
src/Date.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Date.cpp.i
.PHONY : src/Date.cpp.i

src/Date.s: src/Date.cpp.s
.PHONY : src/Date.s

# target to generate assembly for a file
src/Date.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Date.cpp.s
.PHONY : src/Date.cpp.s

src/MainWindow.o: src/MainWindow.cpp.o
.PHONY : src/MainWindow.o

# target to build an object file
src/MainWindow.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/MainWindow.cpp.o
.PHONY : src/MainWindow.cpp.o

src/MainWindow.i: src/MainWindow.cpp.i
.PHONY : src/MainWindow.i

# target to preprocess a source file
src/MainWindow.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/MainWindow.cpp.i
.PHONY : src/MainWindow.cpp.i

src/MainWindow.s: src/MainWindow.cpp.s
.PHONY : src/MainWindow.s

# target to generate assembly for a file
src/MainWindow.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/MainWindow.cpp.s
.PHONY : src/MainWindow.cpp.s

src/SubActivity.o: src/SubActivity.cpp.o
.PHONY : src/SubActivity.o

# target to build an object file
src/SubActivity.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/SubActivity.cpp.o
.PHONY : src/SubActivity.cpp.o

src/SubActivity.i: src/SubActivity.cpp.i
.PHONY : src/SubActivity.i

# target to preprocess a source file
src/SubActivity.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/SubActivity.cpp.i
.PHONY : src/SubActivity.cpp.i

src/SubActivity.s: src/SubActivity.cpp.s
.PHONY : src/SubActivity.s

# target to generate assembly for a file
src/SubActivity.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/SubActivity.cpp.s
.PHONY : src/SubActivity.cpp.s

src/SubActivityDialog.o: src/SubActivityDialog.cpp.o
.PHONY : src/SubActivityDialog.o

# target to build an object file
src/SubActivityDialog.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/SubActivityDialog.cpp.o
.PHONY : src/SubActivityDialog.cpp.o

src/SubActivityDialog.i: src/SubActivityDialog.cpp.i
.PHONY : src/SubActivityDialog.i

# target to preprocess a source file
src/SubActivityDialog.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/SubActivityDialog.cpp.i
.PHONY : src/SubActivityDialog.cpp.i

src/SubActivityDialog.s: src/SubActivityDialog.cpp.s
.PHONY : src/SubActivityDialog.s

# target to generate assembly for a file
src/SubActivityDialog.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/SubActivityDialog.cpp.s
.PHONY : src/SubActivityDialog.cpp.s

src/Time.o: src/Time.cpp.o
.PHONY : src/Time.o

# target to build an object file
src/Time.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Time.cpp.o
.PHONY : src/Time.cpp.o

src/Time.i: src/Time.cpp.i
.PHONY : src/Time.i

# target to preprocess a source file
src/Time.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Time.cpp.i
.PHONY : src/Time.cpp.i

src/Time.s: src/Time.cpp.s
.PHONY : src/Time.s

# target to generate assembly for a file
src/Time.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/Time.cpp.s
.PHONY : src/Time.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione.dir/build.make CMakeFiles/agendaProgrammazione.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

test/ActivityTest.o: test/ActivityTest.cpp.o
.PHONY : test/ActivityTest.o

# target to build an object file
test/ActivityTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/ActivityTest.cpp.o
.PHONY : test/ActivityTest.cpp.o

test/ActivityTest.i: test/ActivityTest.cpp.i
.PHONY : test/ActivityTest.i

# target to preprocess a source file
test/ActivityTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/ActivityTest.cpp.i
.PHONY : test/ActivityTest.cpp.i

test/ActivityTest.s: test/ActivityTest.cpp.s
.PHONY : test/ActivityTest.s

# target to generate assembly for a file
test/ActivityTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/ActivityTest.cpp.s
.PHONY : test/ActivityTest.cpp.s

test/DateTest.o: test/DateTest.cpp.o
.PHONY : test/DateTest.o

# target to build an object file
test/DateTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/DateTest.cpp.o
.PHONY : test/DateTest.cpp.o

test/DateTest.i: test/DateTest.cpp.i
.PHONY : test/DateTest.i

# target to preprocess a source file
test/DateTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/DateTest.cpp.i
.PHONY : test/DateTest.cpp.i

test/DateTest.s: test/DateTest.cpp.s
.PHONY : test/DateTest.s

# target to generate assembly for a file
test/DateTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/DateTest.cpp.s
.PHONY : test/DateTest.cpp.s

test/RunAllTests.o: test/RunAllTests.cpp.o
.PHONY : test/RunAllTests.o

# target to build an object file
test/RunAllTests.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/RunAllTests.cpp.o
.PHONY : test/RunAllTests.cpp.o

test/RunAllTests.i: test/RunAllTests.cpp.i
.PHONY : test/RunAllTests.i

# target to preprocess a source file
test/RunAllTests.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/RunAllTests.cpp.i
.PHONY : test/RunAllTests.cpp.i

test/RunAllTests.s: test/RunAllTests.cpp.s
.PHONY : test/RunAllTests.s

# target to generate assembly for a file
test/RunAllTests.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/RunAllTests.cpp.s
.PHONY : test/RunAllTests.cpp.s

test/TimeTest.o: test/TimeTest.cpp.o
.PHONY : test/TimeTest.o

# target to build an object file
test/TimeTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/TimeTest.cpp.o
.PHONY : test/TimeTest.cpp.o

test/TimeTest.i: test/TimeTest.cpp.i
.PHONY : test/TimeTest.i

# target to preprocess a source file
test/TimeTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/TimeTest.cpp.i
.PHONY : test/TimeTest.cpp.i

test/TimeTest.s: test/TimeTest.cpp.s
.PHONY : test/TimeTest.s

# target to generate assembly for a file
test/TimeTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/agendaProgrammazione_test.dir/build.make CMakeFiles/agendaProgrammazione_test.dir/test/TimeTest.cpp.s
.PHONY : test/TimeTest.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... test"
	@echo "... agendaProgrammazione_autogen"
	@echo "... agendaProgrammazione_test_autogen"
	@echo "... agendaProgrammazione"
	@echo "... agendaProgrammazione_test"
	@echo "... agendaProgrammazione_autogen/mocs_compilation.o"
	@echo "... agendaProgrammazione_autogen/mocs_compilation.i"
	@echo "... agendaProgrammazione_autogen/mocs_compilation.s"
	@echo "... agendaProgrammazione_test_autogen/mocs_compilation.o"
	@echo "... agendaProgrammazione_test_autogen/mocs_compilation.i"
	@echo "... agendaProgrammazione_test_autogen/mocs_compilation.s"
	@echo "... src/Activity.o"
	@echo "... src/Activity.i"
	@echo "... src/Activity.s"
	@echo "... src/ActivityController.o"
	@echo "... src/ActivityController.i"
	@echo "... src/ActivityController.s"
	@echo "... src/ActivityWidget.o"
	@echo "... src/ActivityWidget.i"
	@echo "... src/ActivityWidget.s"
	@echo "... src/Board.o"
	@echo "... src/Board.i"
	@echo "... src/Board.s"
	@echo "... src/BoardController.o"
	@echo "... src/BoardController.i"
	@echo "... src/BoardController.s"
	@echo "... src/Date.o"
	@echo "... src/Date.i"
	@echo "... src/Date.s"
	@echo "... src/MainWindow.o"
	@echo "... src/MainWindow.i"
	@echo "... src/MainWindow.s"
	@echo "... src/SubActivity.o"
	@echo "... src/SubActivity.i"
	@echo "... src/SubActivity.s"
	@echo "... src/SubActivityDialog.o"
	@echo "... src/SubActivityDialog.i"
	@echo "... src/SubActivityDialog.s"
	@echo "... src/Time.o"
	@echo "... src/Time.i"
	@echo "... src/Time.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... test/ActivityTest.o"
	@echo "... test/ActivityTest.i"
	@echo "... test/ActivityTest.s"
	@echo "... test/DateTest.o"
	@echo "... test/DateTest.i"
	@echo "... test/DateTest.s"
	@echo "... test/RunAllTests.o"
	@echo "... test/RunAllTests.i"
	@echo "... test/RunAllTests.s"
	@echo "... test/TimeTest.o"
	@echo "... test/TimeTest.i"
	@echo "... test/TimeTest.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

