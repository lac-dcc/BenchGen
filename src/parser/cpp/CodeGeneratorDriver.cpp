#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

void getInputTokens(std::vector<Token>&, Lexer&, const std::string&);
void applyLSystem(std::vector<Token>&, Lexer&, int, const std::string&);
std::shared_ptr<Node> parseTokensToAST(Parser&, const std::vector<Token>&);
void generateCode(Generator&, std::shared_ptr<Node>&);
void writeToFile(Generator&, std::string);

int main(int argc, char const* argv[]) {

    if (argc < 6) {
        std::cout << "ERROR! Missing arguments!" << std::endl;
        std::cout << "Please provide Number of Iterations, Production Rules, Input File and Output File." << std::endl;
        std::cout << "Usage: ./main <number_of_iterations> <production_rules_file> <input_file> <output_file> <var_type>" << std::endl;
        return 1;
    }

    int iterations = std::stoi(argv[1]);
    std::string productionRulesFile = argv[2];
    std::string inputFile = argv[3];
    std::string outputFile = argv[4];
    std::string varType = argv[5];

    Lexer lexer = Lexer();
    Parser parser = Parser();
    Generator generator = Generator(varType);

    std::vector<Token> inputTokens;

    getInputTokens(inputTokens, lexer, inputFile);

    applyLSystem(inputTokens, lexer, iterations, productionRulesFile);

    std::shared_ptr<Node> AST = parseTokensToAST(parser, inputTokens);

    generateCode(generator, AST);

    // Apply "behavior" later

    writeToFile(generator, outputFile);
    // std::cout << "Printing AST..." << std::endl;
    // AST->print(2);

    return 0;
}

void getInputTokens(std::vector<Token>& inputTokens, Lexer& lexer, const std::string& inputFile) {
    const std::string LEXER_CONFIG_FILE = "../lexer.cfg";
    lexer.loadConfiguration(LEXER_CONFIG_FILE);
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
}

void writeToFile(Generator& generator, std::string outputFile) {
    std::cout << "Writing to file..." << std::endl;
    generator.writeToFile(outputFile);
    generator.endScope();
    std::cout << "Done!" << std::endl;
}