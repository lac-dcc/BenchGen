#include "lexer.h"

using std::ifstream;
using std::regex;

vector<string> Lexer::readFile(string fileName) {
    vector<string> code = {};
    ifstream file("./" + fileName);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            code.push_back(line);
        }
        file.close();
    } else {
        // TODO: Error handling: file not found
    }
    return code;
}

vector<token> Lexer::tokenize(string code) {
    vector<token> tokens = {};
    for (int i = 0; i < code.size(); i++) {
        // Building lexeme
        string lexeme = code.substr(i, 1);

        if (lexeme[0] == ' ') {
            continue;
        }

        if (!matchAnyRule(lexeme)) {
            // TODO: Error handling: unknown lexeme
        }

        // Getting largest sequence possible using lookahead

        bool lookaheaded = false;
        while (matchAnyRule(lexeme) && i < code.length() - 1) {
            lookaheaded = true;
            i++;
            string c = code.substr(i, 1);
            lexeme += c;

            if (c[0] == ' ') {
                break;
            }
        }
        if (lookaheaded && !matchAnyRule(lexeme)) {
            lexeme = lexeme.substr(0, lexeme.length() - 1);
            i--;
        }

        int cur_token = matchToken(lexeme);
        token t = make_tuple(cur_token, lexeme);
        tokens.push_back(t);
    }
    return tokens;
}

bool Lexer::matchAnyRule(string s) {
    for (lexer_rule rule : rules) {
        regex re(std::get<0>(rule));
        if (regex_match(s, re) && std::get<1>(rule) != -1) {
            return true;
        }
    }
    return false;
}

int Lexer::matchToken(string lexeme) {
    for (lexer_rule rule : rules) {
        regex re(std::get<0>(rule));
        if (regex_match(lexeme, re)) {
            return std::get<1>(rule);
        }
    }
    // TODO: Error handling: unknown lexeme
    return -1;
}

int Lexer::getTokenFromId(string tokStr) {
    if (tokStr == "if") {
        return TOK_IF;
    } else if (tokStr == "loop") {
        return TOK_LOOP;
    } else if (tokStr == "call") {
        return TOK_CALL;
    } else if (tokStr == "seq") {
        return TOK_SEQ;
    } else if (tokStr == "insert") {
        return TOK_INSERT;
    } else if (tokStr == "remove") {
        return TOK_REMOVE;
    } else if (tokStr == "del") {
        return TOK_DEL;
    } else if (tokStr == "new") {
        return TOK_NEW;
    } else if (tokStr == "contains") {
        return TOK_CONTAINS;
    } else if (tokStr == "end") {
        return TOK_END;
    } else if (tokStr == "oparen") {
        return TOK_OPAREN;
    } else if (tokStr == "cparen") {
        return TOK_CPAREN;
    } else if (tokStr == "comma") {
        return TOK_COMMA;
    } else if (tokStr == "equal") {
        return TOK_EQUAL;
    } else if (tokStr == "underline") {
        return TOK_UNDERLINE;
    } else if (tokStr == "id") {
        return TOK_ID;
    } else {
        return TOK_ERROR;
    }
}

void Lexer::loadConfiguration(string LEXER_CONFIG_FILE) {
    ifstream file(LEXER_CONFIG_FILE);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            if (line.length() < 1 || line[0] == '#') {
                continue;
            }
            int regexLimit = line.find(' ');
            if (regexLimit == string::npos) {
                // TODO: Error handling: error in config file
            }
            string lineRegex = line.substr(0, regexLimit);

            int tokIdStart = line.find_last_of(' ') + 1;
            int lineLength = line.length();
            string lineTokenStr = line.substr(tokIdStart, lineLength);
            int lineToken = getTokenFromId(lineTokenStr);

            lexer_rule token = make_tuple(lineRegex, lineToken);
            rules.push_back(token);
        }
        file.close();
    } else {
        // TODO: Error handling: lexer config file not found
    }
}

vector<token> Lexer::getTokens(string fileName) {
    vector<string> fileLines = readFile(fileName);
    vector<token> tokens = {};
    for (auto line : fileLines) {
        vector<token> line_tokens = tokenize(line);
        tokens.insert(tokens.begin() + tokens.size(),
                      line_tokens.begin(),
                      line_tokens.begin() + line_tokens.size());
    }
    return tokens;
}

vector<production_rule> Lexer::getProductionRules(string fileName) {
    vector<production_rule> productionRules = {};
    vector<token> tokens = getTokens(fileName);
    for (int i = 0; i < tokens.size(); i++) {
        if (std::get<0>(tokens[i]) == TOK_ID) {
            string id = std::get<1>(tokens[i]);
            i++;
            if (std::get<0>(tokens[i]) == TOK_EQUAL) {
                i++;
                vector<token> production = {};
                while (std::get<0>(tokens[i]) != TOK_END && i < tokens.size()) {
                    production.push_back(tokens[i]);
                    i++;
                }
                production_rule rule = make_tuple(id, production);
                productionRules.push_back(rule);
            } else {
                // TODO: Error handling: unexpected token. expected '='
            }
        } else {
            // TODO: Error handling: unexpected token. expected id
        }
    }
    return productionRules;
}