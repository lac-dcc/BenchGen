#include <iostream>

#include "lexer/lexer.h"
#include "parser/parser.h"
#include "lSystem/lSystem.h"

// TODO: Erase this later
void printAST(std::shared_ptr<Block> node, int ident = 0) {
    if (node == nullptr) {
        return;
    }
    for (int i = 0; i < ident; i++) {
		std::cout << "   ";
    }
    std::cout << " |--";
    switch (node->type) {
        case AST_S:
			std::cout << "S" << std::endl;
            printAST(node->code, ident + 1);
            break;
        case AST_CODE:
			std::cout << "CODE" << std::endl;
            printAST(node->struct_, ident + 1);
            printAST(node->structs, ident + 1);
            break;
        case AST_STRUCT_STRUCTS:
			std::cout << "STRUCT" << std::endl;
            printAST(node->struct_, ident + 1);
            printAST(node->structs, ident + 1);
            break;
        case AST_LAMBDA_STRUCTS:
			std::cout << "LAMBDA" << std::endl;
            break;
        case AST_INSERT_STRUCT:
			std::cout << "INSERT" << std::endl;
            break;
        case AST_REMOVE_STRUCT:
			std::cout << "REMOVE" << std::endl;
            break;
        case AST_NEW_STRUCT:
			std::cout << "NEW" << std::endl;
            break;
        case AST_DEL_STRUCT:
			std::cout << "DEL" << std::endl;
            break;
        case AST_CONTAINS_STRUCT:
			std::cout << "CONTAINS" << std::endl;
            break;
        case AST_LOOP_STRUCT:
			std::cout << "LOOP" << std::endl;
            printAST(node->structs, ident + 1);
            break;
        case AST_CALL_STRUCT:
            std::cout << "CALL" << std::endl;
            printAST(node->structs, ident + 1);
            break;
        case AST_SEQ_STRUCT:
            std::cout << "SEQ" << std::endl;
            printAST(node->structs, ident + 1);
            break;
        case AST_IF_STRUCT:
            std::cout << "IF" << std::endl;
            printAST(node->paramIf, ident + 1);
            printAST(node->else_, ident + 1);
            break;
        case AST_ID_STRUCT:
            std::cout << "ID" << std::endl;
            break;
        case AST_STRUCTS_PARAM_IF:
            std::cout << "PARAM_IF" << std::endl;
            printAST(node->structs, ident + 1);
            printAST(node->paramIf, ident + 1);
            break;
        case AST_UNDERLINE_PARAM_IF:
            std::cout << "UNDERLINE_PARAM_IF" << std::endl;
            break;
        case AST_STRUCTS_ELSE:
            std::cout << "ELSE" << std::endl;
            printAST(node->structs, ident + 1);
            printAST(node->else_, ident + 1);
            break;
        case AST_UNDERLINE_ELSE:
            std::cout << "UNDERLINE_ELSE" << std::endl;
            break;
        default:
            std::cout << "UNKNOWN: " << node->type << std::endl;
            break;
    }
}

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
    std::shared_ptr<S> AST = parser.getAST();
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

    std::cout << "========================================================" << std::endl;
    std::cout << "AST:" << std::endl;
    //printAST(AST, 0);
	std::cout << "========================================================" << std::endl;

    return 0;
}
