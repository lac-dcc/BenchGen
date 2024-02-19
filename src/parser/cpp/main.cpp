#include <iostream>

#include "lexer/lexer.h"
#include "parser/parser.h"

int main(int argc, char const *argv[]) {
    if (argc < 5) {
        cout << "ERROR! Missing arguments!" << endl;
        cout << "Please provide Number of Iterations, Production Rules, Input File and Output File." << endl;
        cout << "Usage: ./main <number_of_iterations> <production_rules_file> <input_file> <output_file>" << endl;
        return 1;
    }

    int iterations = std::stoi(argv[1]);
    string productionRulesFile = argv[2];
    string inputFile = argv[3];
    string outputFile = argv[4];

    cout << "Starting machine 0..." << endl;
    /**
     * MACHINE 0
     * L-System implementation
     */
    const string LEXER_CONFIG_FILE = "../lexer.cfg";
    Lexer lexer;
    lexer.loadConfiguration(LEXER_CONFIG_FILE);
    // Read production rules
    vector<production_rule> productionRules = lexer.getProductionRules(productionRulesFile);
    // Read input string
    vector<token> inputTokens = lexer.getTokens(inputFile);
    // Apply production rules n times to input string and write token sequence (L-System)
    // TODO: Kael
    vector<token> tokenSequence = inputTokens;
    cout << "Machine 0 ended successfully!" << endl;

    cout << "Starting machine 1..." << endl;
    /**
     * MACHINE 1
     * Control-flow creation
     */
    Parser parser;
    parser.setTokens(tokenSequence);
    // Parse the token sequence into a control-flow graph
    parser.parse();
    shared_ptr<Block> controlFlowGraph = parser.getControlFlowGraph();
    cout << "Machine 1 ended successfully!" << endl;

    cout << "Starting machine 2..." << endl;
    /**
     * MACHINE 2
     * Code generation
     */
    // Apply "behavior" to control-flow graph
    // Generate code
    // Write code to file
    cout << "Machine 2 ended successfully!" << endl;

    cout << "Done!" << endl;

    return 0;
}
