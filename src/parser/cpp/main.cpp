#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

std::vector<Token> machine0(int, std::string, std::string);
std::shared_ptr<Node> machine1(std::vector<Token>);
Generator machine2(std::shared_ptr<Node>);
void writeToFile(Generator&, std::string);

int main(int argc, char const* argv[]) {
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

    std::vector<Token> tokenSequence = machine0(iterations, productionRulesFile, inputFile);

    std::shared_ptr<Node> AST = machine1(tokenSequence);

    // Apply "behavior" later
    Generator generator = machine2(AST);

    writeToFile(generator, outputFile);

    std::cout << "Printing AST..." << std::endl;
    AST->print(2);

    return 0;
}

std::vector<Token> machine0(int iterations, std::string productionRulesFile, std::string inputFile) {
    std::cout << "Starting machine 0..." << std::endl;
    Lexer lexer = Lexer();
    const std::string LEXER_CONFIG_FILE = "../lexer.cfg";
    lexer.loadConfiguration(LEXER_CONFIG_FILE);
    std::vector<ProductionRule> productionRules = lexer.getProductionRules(productionRulesFile);
    std::vector<Token> inputTokens = lexer.getTokens(inputFile);
    std::vector<Token> tokenSequence = lSystem::lSystem(iterations, productionRules, inputTokens);
    std::cout << "Machine 0 ended successfully!" << std::endl;
    return tokenSequence;
}

std::shared_ptr<Node> machine1(std::vector<Token> tokenSequence) {
    std::cout << "Starting machine 1..." << std::endl;
    Parser parser = Parser();
    parser.setTokens(tokenSequence);
    parser.parse();
    std::shared_ptr<Node> AST = parser.getAST();
    std::cout << "Machine 1 ended successfully!" << std::endl;
    return AST;
}

Generator machine2(std::shared_ptr<Node> AST) {
    std::cout << "Starting machine 2..." << std::endl;
    Generator generator = Generator();
    AST->gen(generator);
    std::cout << "Machine 2 ended successfully!" << std::endl;
    return generator;
}

void writeToFile(Generator& generator, std::string outputFile) {
    std::cout << "Writing to file..." << std::endl;
    generator.writeToFile(outputFile);
    std::cout << "Done!" << std::endl;
}