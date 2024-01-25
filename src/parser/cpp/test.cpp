#include <iostream>

#include "lexer/lexer.h"
#include "parser/parser.h"

using namespace std;

int main(int argc, char const *argv[]) {
    string LEXER_CONFIG_FILE = "../lexer.cfg";
    cout << "Reading lexer tokens configuration file..." << endl;
    vector<lexer_rule> rules = loadLexerConfig(LEXER_CONFIG_FILE);
    cout << "File read succesfully!\n";

    // cout << "LEXER RULES: \n";
    // for (auto rule : rules) {
    //     cout << "Lexeme: " << get<0>(rule) << "\t Token: " << get<1>(rule) << endl;
    // }

    string CODE_FILE = "../a.l";
    if (argc > 1) {
        CODE_FILE = argv[1];
    }

    cout << "Tokenizing file " << CODE_FILE << "..." << endl;
    vector<token> tokenSeq = getTokens(CODE_FILE, rules);
    cout << "Successfully tokenized!" << endl;

    cout << "TOKENIZED FILE: \n";
    for (auto tok : tokenSeq) {
        cout << "Token: " << get<0>(tok) << "\t Lexeme: " << get<1>(tok) << endl;
    }

    Parser parser(tokenSeq);
    cout << "Parsing token sequence..." << endl;
    parser.parse();

    // cout << "Generating code..." << endl;
    // cout << "Code generated!" << endl;

    cout << "Writing code to file output.c..." << endl;
    parser.generator.writeToFile("output.c");
    cout << "Code written to file!" << endl;

    return 0;
}