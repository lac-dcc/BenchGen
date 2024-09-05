#include "lexer.h"

using std::ifstream;
using std::regex;

Lexer::Lexer() {
    loadConfiguration();
}

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

void Lexer::loadConfiguration() {
    LexerRule lrIf;
    LexerRule lrLoop;
    LexerRule lrCall;
    LexerRule lrSeq;
    LexerRule lrInsert;
    LexerRule lrRemove;
    LexerRule lrNew;
    LexerRule lrContains;
    LexerRule lrEnd;
    LexerRule lrOParen;
    LexerRule lrCParen;
    LexerRule lrComma;
    LexerRule lrEqual;
    LexerRule lrUnderline;
    LexerRule lrComment;
    LexerRule lrId;
    LexerRule lrError;

    lrIf.type = TOK_IF;
    lrLoop.type = TOK_LOOP;
    lrCall.type = TOK_CALL;
    lrSeq.type = TOK_SEQ;
    lrInsert.type = TOK_INSERT;
    lrRemove.type = TOK_REMOVE;
    lrNew.type = TOK_NEW;
    lrContains.type = TOK_CONTAINS;
    lrEnd.type = TOK_END;
    lrOParen.type = TOK_OPAREN;
    lrCParen.type = TOK_CPAREN;
    lrComma.type = TOK_COMMA;
    lrEqual.type = TOK_EQUAL;
    lrUnderline.type = TOK_UNDERLINE;
    lrComment.type = TOK_COMMENT;
    lrId.type = TOK_ID;
    lrError.type = TOK_ERROR;

    lrIf.regex = "IF";
    lrLoop.regex = "LOOP";
    lrCall.regex = "CALL";
    lrSeq.regex = "SEQ";
    lrInsert.regex = "insert";
    lrRemove.regex = "remove";
    lrNew.regex = "new";
    lrContains.regex = "contains";
    lrEnd.regex = "[;]";
    lrOParen.regex = "[(]";
    lrCParen.regex = "[)]";
    lrComma.regex = "[,]";
    lrEqual.regex = "[=]";
    lrUnderline.regex = "[_]";
    lrComment.regex = "[#]";
    lrId.regex = "[a-zA-Z]+[a-zA-Z0-9]*";
    lrError.regex = ".";

    rules = {
        lrIf, lrLoop, lrCall, lrSeq, lrInsert, lrRemove, lrNew, lrContains, lrEnd,
        lrOParen, lrCParen, lrComma, lrEqual, lrUnderline, lrComment, lrId, lrError};
}

std::vector<Token> Lexer::getTokens(std::string fileName) {
    std::vector<std::string> fileLines = readFile(fileName);
    std::vector<Token> tokens = {};
    for (auto line : fileLines) {
        std::vector<Token> line_tokens = tokenize(line);
        tokens.insert(tokens.end(), line_tokens.begin(), line_tokens.end());
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
