#include "parser.h"

void Parser::match(int symbol) {
    if (get<0>(tokens[tokenIndex]) == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
    }
}

void Parser::parse_S() {
    tokenIndex = 0;
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_DEL:
        case TOK_CONTAINS:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_IF:
        case TOK_ID:
            parse_CODE();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_CODE() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_DEL:
        case TOK_CONTAINS:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_IF:
        case TOK_ID:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_STRUCTS() {
    if (tokenIndex == tokens.size()) {
        // generator.scopeEnd();
        return;
    }
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_DEL:
        case TOK_CONTAINS:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_IF:
        case TOK_ID:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_COMMA:
        case TOK_CPAREN:
            // generator.scopeEnd();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_STRUCT() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
            match(get<0>(tokens[tokenIndex]));
            // generator.generateAlloc(get<0>(tokens[tokenIndex - 1]));
            break;
        case TOK_LOOP: {
            match(TOK_LOOP);
            match(TOK_OPAREN);
            // generator.generateFunc(TOK_LOOP);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        }
        case TOK_CALL: {
            match(TOK_CALL);
            match(TOK_OPAREN);
            // generator.generateFunc(TOK_CALL);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        }
        case TOK_SEQ:
            match(TOK_SEQ);
            match(TOK_OPAREN);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            // generator.generateFunc(TOK_IF);
            parse_PARAMIF();
            break;
        case TOK_ID:
            match(TOK_ID);
            // generate?
            parse_STRUCTS();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_PARAMIF() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID:
            parse_STRUCTS();
            match(TOK_COMMA);
            // generator.generateElse();
            parse_ELSE();
            break;
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_COMMA:
            // generator.scopeEnd();
            match(TOK_COMMA);
            // generator.generateElse();
            parse_ELSE();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_ELSE() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_CPAREN:
            match(TOK_CPAREN);
            // generator.scopeEnd();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::setTokens(vector<token> _tokens) {
    tokens = _tokens;
}

void Parser::parse() {
    parse_S();
}

shared_ptr<S> Parser::getAST() {
    return make_shared<S>(move(AST));
}