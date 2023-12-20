void match(int symbol) {
    if (get<0>(tokens[tokenIndex]) == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        std::cout << "ERROR PARSING!" << std::endl;
    }
}

void parse(vector<token> _tokens) {
    tokenIndex = 0;
    tokens = _tokens;
    parse_S();
    std::cout << "Parsing successful!" << std::endl;
}

void parse_S() {
    tokenIndex = 0;
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            parse_CODE();
            break;
        case TOK_LOOP:
            parse_CODE();
            break;
        case TOK_CALL:
            parse_CODE();
            break;
        case TOK_SEQ:
            parse_CODE();
            break;
        case TOK_INSERT:
            parse_CODE();
            break;
        case TOK_REMOVE:
            parse_CODE();
            break;
        case TOK_DEL:
            parse_CODE();
            break;
        case TOK_NEW:
            parse_CODE();
            break;
        case TOK_CONTAINS:
            parse_CODE();
            break;
        case TOK_VAR:
            parse_CODE();
            break;
        case TOK_ID:
            parse_CODE();
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_CODE() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            parse_VSTRUCTS();
            break;
        case TOK_LOOP:
            parse_VSTRUCTS();
            break;
        case TOK_CALL:
            parse_VSTRUCTS();
            break;
        case TOK_SEQ:
            parse_VSTRUCTS();
            break;
        case TOK_INSERT:
            parse_VSTRUCTS();
            break;
        case TOK_REMOVE:
            parse_VSTRUCTS();
            break;
        case TOK_DEL:
            parse_VSTRUCTS();
            break;
        case TOK_NEW:
            parse_VSTRUCTS();
            break;
        case TOK_CONTAINS:
            parse_VSTRUCTS();
            break;
        case TOK_VAR:
            parse_ATRIB();
            parse_CODE();
            break;
        case TOK_ID:
            parse_VSTRUCTS();
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_ATRIB() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_VAR:
            match(TOK_VAR);
            match(TOK_ID);
            match(TOK_EQUAL);
            parse_VSTRUCTS();
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_VSTRUCTS() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_LOOP:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_CALL:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_SEQ:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_INSERT:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_REMOVE:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_DEL:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_NEW:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_CONTAINS:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_ID:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_STRUCTS() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_LOOP:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_CALL:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_SEQ:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_INSERT:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_REMOVE:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_DEL:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_NEW:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_CONTAINS:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        case TOK_END:
            match(TOK_END);
            break;
        case TOK_ID:
            parse_STRUCT();
            parse_STRUCTS();
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_STRUCT() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            parse_PARAMIF();
            break;
        case TOK_LOOP:
            match(TOK_LOOP);
            match(TOK_OPAREN);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_CALL:
            match(TOK_CALL);
            match(TOK_OPAREN);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_SEQ:
            match(TOK_SEQ);
            match(TOK_OPAREN);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_INSERT:
            match(TOK_INSERT);
            break;
        case TOK_REMOVE:
            match(TOK_REMOVE);
            break;
        case TOK_DEL:
            match(TOK_DEL);
            break;
        case TOK_NEW:
            match(TOK_NEW);
            break;
        case TOK_CONTAINS:
            match(TOK_CONTAINS);
            break;
        case TOK_ID:
            match(TOK_ID);
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_PARAMIF() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_LOOP:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_CALL:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_SEQ:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_INSERT:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_REMOVE:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_DEL:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_NEW:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_CONTAINS:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
            match(TOK_COMMA);
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_ID:
            parse_STRUCTS();
            match(TOK_COMMA);
            parse_ELSE();
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}

void parse_ELSE() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_IF:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_LOOP:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_CALL:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_SEQ:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_INSERT:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_REMOVE:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_DEL:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_NEW:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_CONTAINS:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
            match(TOK_CPAREN);
            break;
        case TOK_ID:
            parse_STRUCTS();
            match(TOK_CPAREN);
            break;
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING!" << std::endl;
            break;
    }
}