#include <iostream>

#include "parser/parser.h"

int main(int argc, char const *argv[]) {
    if (argc < 3) {
        cout << "ERROR! Missing arguments!" << endl;
        cout << "Please provide input and output files." << endl;
        cout << "Usage: ./main <input_file> <output_file>" << endl;
        return 1;
    }

    Parser parser;

    const string LEXER_CONFIG_FILE = "../lexer.cfg";
    parser.loadLexerConfiguration(LEXER_CONFIG_FILE);

    parser.getTokens(argv[1]);

    parser.parse();

    parser.writeToFile(argv[2]);

    return 0;
}