# Program Generator

This program parses a DSL describing an L-System, and generates benchmarks from this specification.

## Dependencies

The only dependency is a C++ compiler. Here are some suggestions:

| Compiler | Link                                |
| -------- | ----------------------------------- |
| clang    | [llvm.org](https://clang.llvm.org/) |
| gcc      | [gnu.org](https://gcc.gnu.org/)     |

If you wish to use something other than clang++, please alter the `CC` variable of the Makefile.

## Compiling

Compilation example:

```
make
```

## Running

Run the binary output with a input and output file as parameter.

Calls to the Program Generator must be done in the following format:

```
./main <Number of iterations> <Production Rules File> <Seed String File> <Output Folder> <Variable Type>
```

The available variables types are in the `shared/varTypes.h` file.

## Examples

We provide examples for inputs in the `examples folder`. An example of execution would be:

```
./main 3 production_rule_8.txt seed_string.txt output array
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
