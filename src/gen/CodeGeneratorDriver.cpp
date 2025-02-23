#include <exception>
#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"
#include "shared/varTypes.h"

void tokenizeInput(std::vector<Token>& inputTokens, Lexer& lexer, const std::string& inputFile);

void applyLSystem(std::vector<Token>& inputTokens, Lexer& lexer, int iterations, const std::string& productionRulesFile);

std::shared_ptr<Node> parseTokensToAST(Parser& parser, const std::vector<Token>& tokenSequence);

void generateCode(Generator& generator, std::shared_ptr<Node>& AST);

void generateFiles(Generator& generator, std::string bench_name);

int main(int argc, char const* argv[]) {
    if (argc < 6) {
        std::cout << "ERROR! Missing arguments!" << std::endl;
        std::cout << "Please provide Number of Iterations, Production Rules, Seed String File, Output Folder Name and Variable Type." << std::endl;
        std::cout << "Usage: ./main <number_of_iterations> <production_rules_file> <seed_string_file> <bench_name> <var_type>" << std::endl;
        return 1;
    }
    
    std::cout << "Generating..." << std::endl;
    int iterations;

    try{
        iterations = std::stoi(argv[1]);
    }catch(const std::invalid_argument& e)
    {
        std::cout << "Number of iterations should be integer!" << std::endl;
        return 1;
    }

    std::string productionRulesFile = argv[2];
    std::string inputFile = argv[3];
    std::string bench_name = argv[4];
    std::string varType = argv[5];

    if(varType != VarTypes::ARRAY && varType != VarTypes::SORTEDLIST)
    {
        std::cout << "Variable " + varType + " is wrong!" << std::endl;
        std::cout << "Variables '" + VarTypes::ARRAY + "' and '" + VarTypes::SORTEDLIST + "' is avaliable!" << std::endl;
        return 1;
    }


    Lexer lexer = Lexer();
    Parser parser = Parser();
    Generator generator = Generator(varType);

    std::vector<Token> inputTokens;

    tokenizeInput(inputTokens, lexer, inputFile);

    applyLSystem(inputTokens, lexer, iterations, productionRulesFile);

    std::shared_ptr<Node> AST = parseTokensToAST(parser, inputTokens);

    generateCode(generator, AST);

    generateFiles(generator, bench_name);

    std::cout << "Done!" << std::endl;

    return 0;
}

void tokenizeInput(std::vector<Token>& inputTokens, Lexer& lexer, const std::string& inputFile) {
    inputTokens = lexer.getTokens(inputFile);
}

void applyLSystem(std::vector<Token>& inputTokens, Lexer& lexer, int iterations, const std::string& productionRulesFile) {
    std::vector<ProductionRule> productionRules = lexer.getProductionRules(productionRulesFile);
    inputTokens = lSystem::lSystem(iterations, productionRules, inputTokens);
}

std::shared_ptr<Node> parseTokensToAST(Parser& parser, const std::vector<Token>& tokenSequence) {
    parser.setTokens(tokenSequence);
    parser.parse();
    std::shared_ptr<Node> AST = parser.getAST();
    return AST;
}

void generateCode(Generator& generator, std::shared_ptr<Node>& AST) {
    AST->gen(generator);
    generator.freeVars();
}

void generateFiles(Generator& generator, std::string bench_name) {
    generator.generateFiles(bench_name);
}
