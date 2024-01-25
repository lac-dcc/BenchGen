# Program Generator

This program parses a DSL describing an L-System, and generates benchmarks from this specification.

## Dependencies

The only dependency is a C++ compiler. Here are some suggestions:

| Compiler | Link                                |
| -------- | ----------------------------------- |
| clang    | [llvm.org](https://clang.llvm.org/) |
| gcc      | [gnu.org](https://gcc.gnu.org/)     |

## Compiling

Currently, we don't have a main file to compile. Because of that, we need to compile a test file (cpp/test.cpp). The paths in the program

Compilation example:

```
clang++ cpp/test.cpp -o cpp/test.out
```

## Running

Run the binary output with a input file as parameter. The paths in the program require it to be run inside the cpp folder.

Execution example (using the a.l file as input):

```
cd cpp
./test.out ../a.l
```
