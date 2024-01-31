# Program Generator

This program parses a DSL describing an L-System, and generates benchmarks from this specification.

## Dependencies

The only dependency is a C++ compiler. Here are some suggestions:

| Compiler | Link                                |
| -------- | ----------------------------------- |
| clang    | [llvm.org](https://clang.llvm.org/) |
| gcc      | [gnu.org](https://gcc.gnu.org/)     |

## Compiling

Compilation example:

```
clang++ cpp/main.cpp -o cpp/main
```

## Running

Run the binary output with a input and output file as parameter. The paths in the program requires it to be run inside the cpp folder.

Execution example. This example uses a file named "test.l" as input and creates a file "output.c" as the output C file:

```
cd cpp
./main test.l output.c
```
