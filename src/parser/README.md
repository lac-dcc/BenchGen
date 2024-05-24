# Program Generator

This program parses a DSL describing an L-System, and generates benchmarks from this specification.

## Dependencies

The only dependency is a C++ compiler. Here are some suggestions:

| Compiler | Link                                |
| -------- | ----------------------------------- |
| clang    | [llvm.org](https://clang.llvm.org/) |
| gcc      | [gnu.org](https://gcc.gnu.org/)     |

If you wish to use something other than clang++, please alter the `CC` variable of the Makefile in `/cpp/Makefile`.

## Compiling

Compilation example:

```
cd cpp
make
```

## Running

Run the binary output with a input and output file as parameter. The paths in the program requires it to be run inside the cpp folder.

Calls to the Program Generator must be done in the following format:

```
cd ./cpp
./main <Number of iterations> <Production Rules File> <Seed String File> <Output File> <Variable Type>
```

The current `<Variable Type>`s available are:

-   scalar
-   array
-   vector
-   list

## Examples

We provide examples for inputs in the `examples folder`. An example of execution would be:

```
cd ./cpp
./main 3 examples/production_rule_8.l examples/seed_string.l output.c scalar
```

### Production Rules File

The production rules file should have production rules of the format:

```
<LHS> = <Production>;
```

You may repeat these as many times as you wish for each production rule.

Example:

```
A = insert A remove;
B = A B;
```

### Seed String File

The Seed String File should contain only **Valid Tokens**.
Other than that, these tokens can be written as the user wishes.

Example:

```
IF(LOOP(CALL(B)),A)
```
