#include <iostream>

#include "lexer/lexer.h"

using namespace std;

int main() {
    string LEXER_CONFIG_FILE = "../lexer.cfg";
    cout << "Reading lexer tokens configuration file..." << endl;
    vector<lexer_rule> rules = loadLexerConfig(LEXER_CONFIG_FILE);
    cout << "File read succesfully!\n";

    cout << "LEXER RULES: \n";
    for (auto rule : rules) {
        cout << "Lexeme: " << get<0>(rule) << "\t Token: " << get<1>(rule) << endl;
    }

    cout << "Tokenizing a.l file..." << endl;
    string CODE_FILE = "../a.l";
    vector<token> tokens = getTokens(CODE_FILE, rules);
    cout << "Successfully tokenized!" << endl;

    cout << "TOKENIZED FILE: \n";
    for (auto tok : tokens) {
        cout << "Token: " << get<0>(tok) << "\t Lexeme: " << get<1>(tok) << endl;
    }

    return 0;
}