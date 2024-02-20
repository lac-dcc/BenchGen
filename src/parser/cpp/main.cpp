#include <iostream>

#include "lexer/lexer.h"
#include "parser/parser.h"

// TODO: Erase this later
void printAST(shared_ptr<Block> node, int ident = 0) {
    if (node == nullptr) {
        return;
    }
    for (int i = 0; i < ident; i++) {
        cout << "   ";
    }
    cout << " |--";
    switch (node->type) {
        case AST_S:
            cout << "S" << endl;
            printAST(node->code, ident + 1);
            break;
        case AST_CODE:
            cout << "CODE" << endl;
            printAST(node->struct_, ident + 1);
            printAST(node->structs, ident + 1);
            break;
        case AST_STRUCT_STRUCTS:
            cout << "STRUCT" << endl;
            printAST(node->struct_, ident + 1);
            printAST(node->structs, ident + 1);
            break;
        case AST_LAMBDA_STRUCTS:
            cout << "LAMBDA" << endl;
            break;
        case AST_INSERT_STRUCT:
            cout << "INSERT" << endl;
            break;
        case AST_REMOVE_STRUCT:
            cout << "REMOVE" << endl;
            break;
        case AST_NEW_STRUCT:
            cout << "NEW" << endl;
            break;
        case AST_DEL_STRUCT:
            cout << "DEL" << endl;
            break;
        case AST_CONTAINS_STRUCT:
            cout << "CONTAINS" << endl;
            break;
        case AST_LOOP_STRUCT:
            cout << "LOOP" << endl;
            printAST(node->structs, ident + 1);
            break;
        case AST_CALL_STRUCT:
            cout << "CALL" << endl;
            printAST(node->structs, ident + 1);
            break;
        case AST_SEQ_STRUCT:
            cout << "SEQ" << endl;
            printAST(node->structs, ident + 1);
            break;
        case AST_IF_STRUCT:
            cout << "IF" << endl;
            printAST(node->paramIf, ident + 1);
            printAST(node->else_, ident + 1);
            break;
        case AST_ID_STRUCT:
            cout << "ID" << endl;
            break;
        case AST_STRUCTS_PARAM_IF:
            cout << "PARAM_IF" << endl;
            printAST(node->structs, ident + 1);
            printAST(node->paramIf, ident + 1);
            break;
        case AST_UNDERLINE_PARAM_IF:
            cout << "UNDERLINE_PARAM_IF" << endl;
            break;
        case AST_STRUCTS_ELSE:
            cout << "ELSE" << endl;
            printAST(node->structs, ident + 1);
            printAST(node->else_, ident + 1);
            break;
        case AST_UNDERLINE_ELSE:
            cout << "UNDERLINE_ELSE" << endl;
            break;
        default:
            cout << "UNKNOWN: " << node->type << endl;
            break;
    }
}

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
    shared_ptr<S> AST = parser.getAST();
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

    cout << "========================================================" << endl;
    cout << "AST:" << endl;
    printAST(AST);
    cout << "========================================================" << endl;

    return 0;
}
