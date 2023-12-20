#include "lexer.h"

using std::ifstream;
using std::regex;

vector<token> getTokens(string fileName, vector<lexer_rule> rules) {
    vector<string> fileLines = readFile(fileName);
    vector<token> tokens = {};
    for (auto line : fileLines) {
        vector<token> line_tokens = tokenize(line, rules);
        tokens.insert(tokens.begin() + tokens.size(),
                      line_tokens.begin(),
                      line_tokens.begin() + line_tokens.size());
    }
    return tokens;
}

vector<token> tokenize(string code, vector<lexer_rule> rules) {
    vector<token> tokens = {};
    for (int i = 0; i < code.size(); i++) {
        // Building lexeme
        string lexeme = code.substr(i, 1);

        if (lexeme[0] == ' ') {
            continue;
        }

        if (!matchAnyRule(lexeme, rules)) {
            // TODO: Error handling: unknown lexeme
        }

        // Getting largest sequence possible using lookahead

        bool lookaheaded = false;
        while (matchAnyRule(lexeme, rules) && i < code.length() - 1) {
            lookaheaded = true;
            i++;
            string c = code.substr(i, 1);
            lexeme += c;

            if (c[0] == ' ') {
                break;
            }
        }
        if (lookaheaded && !matchAnyRule(lexeme, rules)) {
            lexeme = lexeme.substr(0, lexeme.length() - 1);
            i--;
        }

        int cur_token = matchToken(lexeme, rules);
        token t = make_tuple(cur_token, lexeme);
        tokens.push_back(t);
    }
    return tokens;
}

vector<lexer_rule> loadLexerConfig(string LEXER_CONFIG_FILE) {
    ifstream file(LEXER_CONFIG_FILE);
    if (file.is_open()) {
        vector<lexer_rule> rules = {};
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
        return rules;
    } else {
        // TODO: Error handling: lexer config file not found
    }
    return {};
}

bool matchAnyRule(string s, vector<lexer_rule> rules) {
    for (lexer_rule rule : rules) {
        regex re(std::get<0>(rule));
        if (regex_match(s, re) && std::get<1>(rule) != -1) {
            return true;
        }
    }
    return false;
}

int matchToken(string lexeme, vector<lexer_rule> rules) {
    for (lexer_rule rule : rules) {
        regex re(std::get<0>(rule));
        if (regex_match(lexeme, re)) {
            return std::get<1>(rule);
        }
    }
    // TODO: Error handling: unknown lexeme
    return -1;
}

int getTokenFromId(string tokStr) {
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
    } else if (tokStr == "var") {
        return TOK_VAR;
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