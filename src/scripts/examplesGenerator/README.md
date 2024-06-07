# Examples Generator

## Overview

The `examplesGenerator.py` script is designed to automate the process of generating BenchGen example files by compiling a set of production rules with various configurations. This script supports different combinations of iterations, production rules, and variable types, and generates output files in the specified format.

## Requirements

-   Python 3.x
-   Necessary parser located at `./../../parser/main`
-   Production rule files located in `production_rules/` directory.
-   Seed string file located in `seed_strings/` directory.

## Usage

### Script Arguments

The script accepts the following command-line arguments:

1. `example`: Specifies which example generation method to use. Accepts values `1`, `2` or `3`.
2. `iterations` (optional): Specifies the number of iterations for example generation.

### Running the Script

1. **Generate Examples using Method 1**:

    ```bash
    python examplesGenerator.py 1 [iterations]
    ```

    - If `iterations` is provided, it overrides the default value.

2. **Generate Examples using Method 2**:

    ```bash
    python examplesGenerator.py 2
    ```

3. **Generate Examples using Method 3**:

    ```bash
    python examplesGenerator.py 3 [iterations]
    ```

    - If `iterations` is provided, it overrides the default value.

### Example Commands

-   Generate examples using method 1 with default iterations:

    ```bash
    python examplesGenerator.py 1
    ```

-   Generate examples using method 1 with 5 iterations:

    ```bash
    python examplesGenerator.py 1 5
    ```

-   Generate examples using method 2:
    ```bash
    python examplesGenerator.py 2
    ```

## Example Output

The generated output files will be located in the `results` directory.
