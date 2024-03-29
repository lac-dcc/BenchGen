#include "lexer.h"

using std::ifstream;
using std::regex;

std::vector<std::string> Lexer::readFile(std::string fileName) {
    std::vector<std::string> code = {};
    ifstream file("./" + fileName);
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            code.push_back(line);
        }
        file.close();
    } else {
        // TODO: Error handling: file not found
    }
    return code;
}

std::vector<Token> Lexer::tokenize(std::string code) {
    std::vector<Token> tokens = {};
    for (int i = 0; i < code.size(); i++) {
        // Building lexeme
        std::string lexeme = code.substr(i, 1);

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
            std::string c = code.substr(i, 1);
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
        if (cur_token == TOK_COMMENT) {
            break;
        }
        Token t = {cur_token, lexeme};
        tokens.push_back(t);
    }
    return tokens;
}

bool Lexer::matchAnyRule(std::string s) {
    for (LexerRule rule : rules) {
        regex re(rule.regex);
        if (regex_match(s, re) && rule.type != -1) {
            return true;
        }
    }
    return false;
}

int Lexer::matchToken(std::string lexeme) {
    for (LexerRule rule : rules) {
        regex re(rule.regex);
        if (regex_match(lexeme, re)) {
            return rule.type;
        }
    }
    // TODO: Error handling: unknown lexeme
    return -1;
}

int Lexer::getTokenFromId(std::string tokStr) {
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
    } else if (tokStr == "comment") {
        return TOK_COMMENT;
    } else if (tokStr == "id") {
        return TOK_ID;
    } else {
        return TOK_ERROR;
    }
}

void Lexer::loadConfiguration(std::string LEXER_CONFIG_FILE) {
    ifstream file(LEXER_CONFIG_FILE);
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            if (line.length() < 1 || line[0] == '#') {
                continue;
            }
            int regexLimit = line.find(' ');
            if (regexLimit == std::string::npos) {
                // TODO: Error handling: error in config file
            }
            std::string lineRegex = line.substr(0, regexLimit);

            int tokIdStart = line.find_last_of(' ') + 1;
            int lineLength = line.length();
            std::string lineTokenStr = line.substr(tokIdStart, lineLength);
            int lineToken = getTokenFromId(lineTokenStr);

            LexerRule token = {lineToken, lineRegex};
            rules.push_back(token);
        }
        file.close();
    } else {
        // TODO: Error handling: lexer config file not found
    }
}

std::vector<Token> Lexer::getTokens(std::string fileName) {
    std::vector<std::string> fileLines = readFile(fileName);
    std::vector<Token> tokens = {};
    for (auto line : fileLines) {
        std::vector<Token> line_tokens = tokenize(line);
        tokens.insert(tokens.begin() + tokens.size(),
                      line_tokens.begin(),
                      line_tokens.begin() + line_tokens.size());
    }
    return tokens;
}

std::vector<ProductionRule> Lexer::getProductionRules(std::string fileName) {
    std::vector<ProductionRule> productionRules = {};
    std::vector<Token> tokens = getTokens(fileName);
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i].type == TOK_ID) {
            std::string id = tokens[i].text;
            i++;
            if (tokens[i].type == TOK_EQUAL) {
                i++;
                std::vector<Token> production = {};
                while (tokens[i].type != TOK_END && i < tokens.size()) {
                    production.push_back(tokens[i]);
                    i++;
                }
                ProductionRule rule = {id, production};
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
