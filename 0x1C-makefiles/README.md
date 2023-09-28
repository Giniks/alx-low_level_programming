Project title:C - Makefiles

Overview🎗🎗📌
I've developed my ability to create Makefiles to effectively manage and compile C programs through this project. An overview of the project's structure and the tasks I've finished are provided below.

Project Organization: filefolder:

Heavycheck mark tests: tests A group of test files are located in this directory and are used to check the program's functionality.

Helper Files: school.c; raised hands A C function for text-based seahorse display can be found in this file. It serves as a practice Makefile throughout the project.

The primary C function, main.c, executes the in-class functionality.c.

File:file folder header

A header file called m.h defines the model function that was utilized in classes.Tasks:page with curl c.


Here is a list of the tasks I've finished, each with a corresponding Makefile:

Basic Task 0 

Makefile 0-Makefile: Using the source files school.c and main.c, this Makefile generates an executable called school. A all rule is included for creating the executable.
Custom Compiler 1-Makefile, Task 1: This Makefile introduces the usage of variables in addition to Task 0. It designates SRC as the source files and CC as the appropriate compiler. To just recompile changed source files, the all rule has been amended.
Task 2: 

Executable Name and Object Files

2-Makefile: By adding the variables OBJ for object files and NAME for the name of the object files, this Makefile expands Task and the executable's name.

Task 3: Recompilation and Cleaning
Task 3 improves Task 2 by including cleaning rules in the 3-Makefile. It contains:
clean: Removes the executable and temporary files used by Emacs and Vim.
The object files are deleted by oclean.
The executable and object files are deleted by the fclean command.
Re: Requires all source files to be rebuilt.
RM: Specifies the file deletion command.

Fourth task: Compiler flags
4-Makefile: A Makefile that adds compiler flags is created in this job. The compiler flags -Wwall, -Werror, -Wextra, and -pedantic are defined via the CFLAGS variable.

Python Task 5 - 5-island perimeter.py: The island perimeter(grid) method in this Python script calculates an island's perimeter within a grid.

Task 6: Advanced Makefile 100-Makefile: Task 6 adds an advanced Makefile to the build process. Notably,it: Is silent on the subject of RM.

Never make use of $(CFLAGS).
makes certain the m.h header is present and it works even if the current directory contains files with the same names as any Makefile rules.

You are welcome to look over the code files and Makefiles to fully comprehend how each task is implemented. Coding is fun!

Acknowledgement:

All thanks to Alx community for their tremendeous help.

Authour

Name: Ginika Elizabeth Nna

Email: elizabethginika9@gmail.com
