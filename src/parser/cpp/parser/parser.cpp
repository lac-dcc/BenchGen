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
            if (isDeclarationLookahead()) {
                parse_DECL();
                parse_CODE();
            } else {
                parse_VSTRUCTS();
            }
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_DECL() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_ID:
            match(TOK_ID);
            match(TOK_EQUAL);
            generator.generateDeclaration(get<1>(tokens[tokenIndex - 2]));
            parse_VSTRUCTS();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_VSTRUCTS() {
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
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_END:
            match(TOK_END);
            generator.scopeEnd();
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

void Parser::parse_STRUCT() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            generator.generateFunc(TOK_IF);
            parse_PARAMIF();
            break;
        case TOK_LOOP:
            match(TOK_LOOP);
            match(TOK_OPAREN);
            generator.generateFunc(TOK_LOOP);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_CALL:
            match(TOK_CALL);
            match(TOK_OPAREN);
            generator.generateFunc(TOK_CALL);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_SEQ:
            match(TOK_SEQ);
            match(TOK_OPAREN);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_ID:
            match(TOK_ID);
            generator.generateIdCall(get<1>(tokens[tokenIndex - 1]));
            break;
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
            match(get<0>(tokens[tokenIndex]));
            generator.generateAlloc(get<0>(tokens[tokenIndex - 1]));
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
            generator.generateElse();
            parse_ELSE();
            break;
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
            generator.scopeEnd();
            match(TOK_COMMA);
            generator.generateElse();
            parse_STRUCTS();
            match(TOK_CPAREN);
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
            generator.scopeEnd();
            match(TOK_CPAREN);
            break;
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
}

bool Parser::isDeclarationLookahead() {
    return get<0>(tokens[tokenIndex]) == TOK_ID && get<0>(tokens[tokenIndex + 1]) == TOK_EQUAL;
}

void Parser::loadLexerConfiguration(string fileName) {
    cout << "Reading lexer configuration file..." << endl;
    lexer.loadConfiguration(fileName);
    cout << "File read succesfully!\n";
}

void Parser::getTokens(string fileName) {
    cout << "Tokenizing file " << fileName << "..." << endl;
    tokens = lexer.getTokens(fileName);
    cout << "Successfully tokenized!" << endl;
}

void Parser::parse() {
    cout << "Parsing token sequence..." << endl;
    parse_S();
    cout << "Parsing successful!" << endl;
}

void Parser::writeToFile(string fileName) {
    cout << "Writing code to file " + fileName + "..." << endl;
    generator.writeToFile(fileName);
    cout << "Code written to file!" << endl;
}