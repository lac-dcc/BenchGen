#include <iostream>

#include "lSystem/lSystem.h"
#include "lexer/lexer.h"
#include "parser/parser.h"

void getInputTokens(std::vector<Token>&, Lexer&, const std::string&);
void applyLSystem(std::vector<Token>&, Lexer&, int, const std::string&);
std::shared_ptr<Node> parseTokensToAST(Parser&, const std::vector<Token>&);
void generateCode(Generator&, std::shared_ptr<Node>&);
void genBenchmark(Generator&, std::string);

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

    Lexer lexer = Lexer();
    Parser parser = Parser();
    Generator generator = Generator(varType);

    std::vector<Token> inputTokens;

    getInputTokens(inputTokens, lexer, inputFile);

    // Print input tokens
    // std::cout << "BEFORE LSYSTEM:\n";
    // for (auto tok : inputTokens) {
    //     std::cout << tok.text << " ";
    // }
    // std::cout << std::endl;

    applyLSystem(inputTokens, lexer, iterations, productionRulesFile);

    // Print input tokens
    // std::cout << "AFTER LSYSTEM:\n";
    // for (auto tok : inputTokens) {
    //     std::cout << tok.text << " ";
    // }
    // std::cout << std::endl;

    std::shared_ptr<Node> AST = parseTokensToAST(parser, inputTokens);

    generateCode(generator, AST);

    // Apply "behavior" later

    genBenchmark(generator, bench_name);
    // std::cout << "Printing AST..." << std::endl;
    // AST->print(2);

    return 0;
}

void getInputTokens(std::vector<Token>& inputTokens, Lexer& lexer, const std::string& inputFile) {
    lexer.loadConfiguration();
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

void genBenchmark(Generator& generator, std::string bench_name) {
    generator.genBenchmark(bench_name);
    generator.freeVars();
    generator.endScope();
    std::cout << "Done!" << std::endl;
}