#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

std::vector<Token> getInputTokens(Lexer&, std::string&);
std::vector<Token> applyLSystem(Lexer&, int, std::string&, std::vector<Token>&);
std::shared_ptr<Node> parseTokensToAST(Parser&, std::vector<Token>&);
void generateCode(Generator&, std::shared_ptr<Node>&);
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

    Lexer lexer = Lexer();
    Parser parser = Parser();
    Generator generator = Generator();

    std::vector<Token> inputTokens = getInputTokens(lexer, inputFile);

    std::vector<Token> tokenSequence = applyLSystem(lexer, iterations, productionRulesFile, inputTokens);

    std::shared_ptr<Node> AST = parseTokensToAST(parser, tokenSequence);

    generateCode(generator, AST);

    // Apply "behavior" later

    writeToFile(generator, outputFile);

    // std::cout << "Printing AST..." << std::endl;
    // AST->print(2);

    return 0;
}

std::vector<Token> getInputTokens(Lexer& lexer, std::string& inputFile) {
    const std::string LEXER_CONFIG_FILE = "../lexer.cfg";
    lexer.loadConfiguration(LEXER_CONFIG_FILE);
    std::vector<Token> inputTokens = lexer.getTokens(inputFile);
    return inputTokens;
}

std::vector<Token> applyLSystem(Lexer& lexer, int iterations, std::string& productionRulesFile, std::vector<Token>& inputTokens) {
    std::vector<ProductionRule> productionRules = lexer.getProductionRules(productionRulesFile);
    std::vector<Token> tokenSequence = lSystem::lSystem(iterations, productionRules, inputTokens);
    return tokenSequence;
}

std::shared_ptr<Node> parseTokensToAST(Parser& parser, std::vector<Token>& tokenSequence) {
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
    std::cout << "Done!" << std::endl;
}