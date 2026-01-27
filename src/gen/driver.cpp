#include <exception>
#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

#include "generator/generator.h"
#include "lang/c/generator.h"
#include "lang/c/array.h"

int main(int argc, char const* argv[]) {

    if (argc < 6) {
        std::cout << "ERROR! Missing arguments!" << std::endl;
        std::cout << "Please provide Number of Iterations, Production Rules, Seed String File, Output Folder Name and Variable Type." << std::endl;
        std::cout << "Usage: ./main <number_of_iterations> <production_rules_file> <seed_string_file> <bench_name> <var_type>" << std::endl;
        return 1;
    }
    
    int iterations = std::stoi(argv[1]);
    std::string productionRulesFile = argv[2];
    std::string inputFile = argv[3];
    std::string bench_name = argv[4];
    std::string varType = argv[5];

    // TODO: error handling

    Lexer lexer = Lexer();
    Parser parser = Parser();
    CGenerator<CArray> generator = CGenerator<CArray>();

    std::vector<Token> tokens = lexer.getTokens(inputFile);

    std::vector<ProductionRule> productionRules = lexer.getProductionRules(productionRulesFile);
    tokens = lSystem::lSystem(iterations, productionRules, tokens);

    parser.setTokens(tokens);
    parser.parse();
    std::shared_ptr<Node> AST = parser.getAST();
    
    std::cout << "generating..." << std::endl;
    
    generator.init();
    AST->accept(generator);
    generator.freeVars(); 
    generator.generateFiles(bench_name);
    
    std::cout << "done!" << std::endl;

    return 0;
}
