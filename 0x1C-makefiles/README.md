# C - Makefiles

This repository contains exercises on crafting Makefiles.

## Test Suite :heavy_check_mark:

* [tests](./tests) - Directory containing test cases.

## Supplementary Code :raised_hands:

* [school.c](./school.c) - A C function that renders a seahorse using ASCII art. This is utilized across various tasks for practicing Makefile usage.

* [main.c](./main.c) - The primary C function that executes the routine found in [school.c](./school.c).

## Definition File :file_folder:

* [m.h](./m.h) - Header file that declares the function signature used in `school.c`.

## Assignments :page_with_curl:

* **Task 0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile) - A Makefile that compiles an executable named `school` from [school.c](./school.c) and [main.c](./main.c), featuring:
    * An `all` rule that assembles the executable.

* **Task 1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile) - Enhances [0-Makefile](./0-Makefile) by introducing an executable `school` from [school.c](./school.c) and [main.c](./main.c) with additional components:
    * A `CC` variable specifying the compiler.
    * A `SRC` variable listing the `.c` files for compilation.
    * The `all` rule now recompiles only the modified source files.

* **Task 2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile) - Builds upon [1-Makefile](./1-Makefile) to compile an executable `school` from [school.c](./school.c) and [main.c](./main.c), now including:
    * An `OBJ` variable for the `.o` files needed for compilation.
    * A `NAME` variable to name the executable.

* **Task 3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile) - Advances [2-Makefile](./2-Makefile) with additional functionality for the executable `school` compilation from [school.c](./school.c) and [main.c](./main.c):
    * A `clean` rule for removing Emacs/Vim temporary files and the executable.
    * An `oclean` rule to delete the object files.
    * A `fclean` rule to eliminate temporary files, the executable, and object files.
    * A `re` rule for forcing a recompilation of all sources.
    * A `RM` variable that specifies the file deletion command.

* **Task 4. A complete Makefile**
  * [4-Makefile](./4-Makefile) - Refines [3-Makefile](./3-Makefile) by compiling an executable `school` from [school.c](./school.c) and [main.c](./main.c), incorporating:
    * A `CFLAGS` variable with compiler flags `-Wall -Werror -Wextra -pedantic`.

* **Task 5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py) - A Python function that computes the perimeter of an island represented in a grid map.
  * Function prototype: `def island_perimeter(grid):`
  * `grid` is a list of lists of integers representing:
    * `0` for water.
    * `1` for land.
    * Each list element represents a cell with a side length of 1.
    * Cells are connected horizontally/vertically (not diagonally).
    * The grid is rectangular, not exceeding 100 in width or height.
    * Completely surrounded by water, it contains one island or none, without lakes.

* **Task 6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile) - Extends [4-Makefile](./4-Makefile) to compile an executable `school` from [school.c](./school.c) and [main.c](./main.c) with distinct rules:
    * Omits the `RM` variable definition.
    * Avoids using `$(CFLAGS)`.
    * Fails compilation if `m.h` header is missing.
    * Remains functional even when files named after any Makefile rules exist in the directory.