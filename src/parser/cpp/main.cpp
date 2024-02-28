#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

int main(int argc, char const *argv[]) {
    if (argc < 5) {
        std::cout << "ERROR! Missing arguments!" << std::endl;
        std::cout << "Please provide Number of Iterations, Production Rules, Input File and Output File." << std::endl;
        std::cout << "Usage: ./main <number_of_iterations> <production_rules_file> <input_file> <output_file>" << std::endl;
        return 1;
    }

    int iterations = std::stoi(argv[1]);
    std::string productionRulesFile = argv[2];
    std::string inputFile = argv[3];
    std::string outputFile = argv[4];

    std::cout << "Starting machine 0..." << std::endl;
    /**
     * MACHINE 0
     * L-System implementation
     */
    const std::string LEXER_CONFIG_FILE = "../lexer.cfg";
    Lexer lexer;
    lexer.loadConfiguration(LEXER_CONFIG_FILE);

    // Read production rules
    std::vector<ProductionRule> productionRules = lexer.getProductionRules(productionRulesFile);
    // Read input string
    std::vector<Token> inputTokens = lexer.getTokens(inputFile);

    // Apply production rules n times to input string and write token sequence (L-System)
    /*
     *	Takes in the number of iterations (n), the production rules and a vector
     *	of tokens representing the seed string and outputs the sequence of tokens
     *	with the rules applied n times.
     *
     *	Input: 2; A -> Print(HI) A; Start A End;
     *	Output: Start Print(HI) Print(HI) End
     */

    std::vector<Token> tokenSequence = lSystem::lSystem(iterations, productionRules, inputTokens);
    std::cout << "Machine 0 ended successfully!" << std::endl;

    std::cout << "Starting machine 1..." << std::endl;
    /**
     * MACHINE 1
     * Control-flow creation
     */
    Parser parser;
    parser.setTokens(tokenSequence);
    // Parse the token sequence into a control-flow graph
    parser.parse();
    std::shared_ptr<Node> AST = parser.getAST();
    std::cout << "Machine 1 ended successfully!" << std::endl;

    std::cout << "Starting machine 2..." << std::endl;
    /**
     * MACHINE 2
     * Code generation
     */
    // Apply "behavior" to control-flow graph
    // Generate code
    // Write code to file
    std::cout << "Machine 2 ended successfully!" << std::endl;

    std::cout << "Done!" << std::endl;

    std::cout << "Printing AST..." << std::endl;
    AST->print(0);

    return 0;
}
