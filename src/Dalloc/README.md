# Debug Alloc (Dalloc)
This folder contains the code for the Debug memory allocator. The source code can be found in the Dalloc.cpp and Dalloc.h files and an example of Dalloc in use can be compiled by running `make` in this directory. 

The purpose of Dalloc is to add a debug output to the malloc and free functions from the C standard library without any changes to an original program that wishes this debugging to occur.

The output follows the format [Time, Pointer, Size, m/f] where m means `malloc` and f means `free`. Anytime `malloc` or `free` is called, the debug output will be printed to the standard output.

## Usage 
To use Dalloc in other programs, one must add `--wrap malloc` and `--wrap free` as arguments to the linker with the compilation result of `Dalloc.cpp`. A simple way to do that is to add `-Wl,--wrap,malloc,--wrap,free` to your C/C++ compiler (gcc/g++/clang) in the step that `Dalloc.cpp` or `Dalloc.o` is added to the other compilation files to make the target. An example of this being done successfully can be found in the `Makefile`.
