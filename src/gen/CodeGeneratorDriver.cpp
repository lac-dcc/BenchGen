#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

// Function declarations

/**
 * @brief Tokenizes the input file.
 *
 * @param inputTokens Vector to store the generated tokens.
 * @param lexer Lexer object to handle tokenization.
 * @param inputFile Path to the input file containing the seed string.
 */
void tokenizeInput(std::vector<Token>& inputTokens, Lexer& lexer, const std::string& inputFile);

/**
 * @brief Applies L-system transformations to the tokens.
 *
 * @param inputTokens Vector of tokens to be transformed.
 * @param lexer Lexer object to load production rules.
 * @param iterations Number of L-system iterations to apply.
 * @param productionRulesFile Path to the file containing production rules.
 */
void applyLSystem(std::vector<Token>& inputTokens, Lexer& lexer, int iterations, const std::string& productionRulesFile);

/**
 * @brief Parses a sequence of tokens into an Abstract Syntax Tree (AST).
 *
 * @param parser Parser object to handle parsing.
 * @param tokenSequence Vector of tokens to parse.
 * @return A shared pointer to the root node of the generated AST.
 */
std::shared_ptr<Node> parseTokensToAST(Parser& parser, const std::vector<Token>& tokenSequence);

/**
 * @brief Generates code from an AST.
 *
 * @param generator Generator object to handle code generation.
 * @param AST Shared pointer to the root node of the AST.
 */
void generateCode(Generator& generator, std::shared_ptr<Node>& AST);

/**
 * @brief Generates output files based on the generated code.
 *
 * @param generator Generator object to handle file generation.
 * @param bench_name Name of the benchmark or output file to be generated.
 */
void generateFiles(Generator& generator, std::string bench_name);

// Main function

/**
 * @brief Main entry point for the application.
 *
 * This function initializes the necessary components, processes command-line
 * arguments, and orchestrates the generation of benchmarks using the L-system.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return Exit status code. Returns 1 if incorrect arguments are provided, 0 otherwise.
 */
int main(int argc, char const* argv[]) {
    if (argc < 6) {
        std::cout << "ERROR! Missing arguments!" << std::endl;
        std::cout << "Please provide Number of Iterations, Production Rules, Seed String File, Output Folder Name and Variable Type." << std::endl;
        std::cout << "Usage: ./main <number_of_iterations> <production_rules_file> <seed_string_file> <bench_name> <var_type>" << std::endl;
        return 1;
    }

    std::cout << "Generating..." << std::endl;

    // Parse command-line arguments
    int iterations = std::stoi(argv[1]);        // Number of iterations for L-system
    std::string productionRulesFile = argv[2];  // File containing production rules
    std::string inputFile = argv[3];            // File containing the seed string
    std::string bench_name = argv[4];           // Name of the output benchmark
    std::string varType = argv[5];              // Type of variable to use in code generation

    // Initialize the components needed for processing
    Lexer lexer = Lexer();
    Parser parser = Parser();
    Generator generator = Generator(varType);

    std::vector<Token> inputTokens;  // Vector to hold tokens from the input file

    // Step 1: Tokenize the input file
    tokenizeInput(inputTokens, lexer, inputFile);

    // Step 2: Apply the L-system transformations
    applyLSystem(inputTokens, lexer, iterations, productionRulesFile);

    // Step 3: Parse the tokens into an Abstract Syntax Tree (AST)
    std::shared_ptr<Node> AST = parseTokensToAST(parser, inputTokens);

    // Step 4: Generate code based on the AST
    generateCode(generator, AST);

    // Step 5: Generate the benchmark file
    generateFiles(generator, bench_name);

    std::cout << "Done!" << std::endl;

    return 0;
}

/**
 * @brief Tokenizes the input file.
 *
 * @param inputTokens Vector to store the generated tokens.
 * @param lexer Lexer object to handle tokenization.
 * @param inputFile Path to the input file containing the seed string.
 */
void tokenizeInput(std::vector<Token>& inputTokens, Lexer& lexer, const std::string& inputFile) {
    lexer.loadConfiguration();
    inputTokens = lexer.getTokens(inputFile);
}

/**
 * @brief Applies L-system transformations to the tokens.
 *
 * @param inputTokens Vector of tokens to be transformed.
 * @param lexer Lexer object to load production rules.
 * @param iterations Number of L-system iterations to apply.
 * @param productionRulesFile Path to the file containing production rules.
 */
void applyLSystem(std::vector<Token>& inputTokens, Lexer& lexer, int iterations, const std::string& productionRulesFile) {
    std::vector<ProductionRule> productionRules = lexer.getProductionRules(productionRulesFile);  // Load production rules
    inputTokens = lSystem::lSystem(iterations, productionRules, inputTokens);
}

/**
 * @brief Parses a sequence of tokens into an Abstract Syntax Tree (AST).
 *
 * @param parser Parser object to handle parsing.
 * @param tokenSequence Vector of tokens to parse.
 * @return A shared pointer to the root node of the generated AST.
 */
std::shared_ptr<Node> parseTokensToAST(Parser& parser, const std::vector<Token>& tokenSequence) {
    parser.setTokens(tokenSequence);
    parser.parse();
    std::shared_ptr<Node> AST = parser.getAST();  // Get the generated AST
    return AST;
}

/**
 * @brief Generates code from an AST.
 *
 * @param generator Generator object to handle code generation.
 * @param AST Shared pointer to the root node of the AST.
 */
void generateCode(Generator& generator, std::shared_ptr<Node>& AST) {
    AST->gen(generator);
    generator.freeVars();
}

/**
 * @brief Generates output files based on the generated code.
 *
 * This function uses the generator to produce benchmark files with the specified
 * name, managing the necessary scope and variables for the output.
 *
 * @param generator Generator object to handle file generation.
 * @param bench_name Name of the benchmark or output file to be generated.
 */
void generateFiles(Generator& generator, std::string bench_name) {
    generator.generateFiles(bench_name);
}
