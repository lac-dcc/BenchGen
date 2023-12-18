import re
from reader import readFile

def getTokens(fileName, rules) -> list:
    """
    Returns the tokens of the file.
    """
    fileLines = readFile(fileName)
    tokens = []
    for line in fileLines:
        tokens.extend(tokenize(line, rules))
    return tokens

def tokenize(code, rules) -> list:
    """
    Tokenizes the code using the rules.
    """
    tokens = []
    i = 0
    while i < len(code):
        lexeme = code[i]
        if lexeme == ' ':
            i += 1
            continue

        if not matchAnyRule(lexeme, rules):
            # TODO: Add error handling
            return None
        
        lookaheaded = False
        while matchAnyRule(lexeme, rules) and i < (len(code) - 1):
            lookaheaded = True
            i += 1
            c = code[i]
            lexeme += c
            if c == ' ':
                break

        if lookaheaded and not matchAnyRule(lexeme, rules):
            lexeme = lexeme[:-1]
            i -= 1

        cur_token = matchToken(lexeme, rules)
        tokens.append((cur_token, lexeme))
        i += 1
        print((cur_token, lexeme))

    return tokens

def loadLexerConfig(LEXER_CONFIG_FILE) -> list:
    """
    Loads the lexer configuration file and returns the rules.
    """
    rules = []
    with open(LEXER_CONFIG_FILE, "r") as f:
        for line in f:
            if len(line) < 2 or line[0] == "#":
                continue
            regex = line[:line.find(' ')].strip()
            token = line[line.rfind(' '):].strip()
            rules.append((regex, token))
    return rules

def matchAnyRule(s, rules) -> bool:
    """
    Returns True if the string matches any of the rules.
    Returns False if it does not match any of the rules.
    """
    for rule in rules:
        if re.fullmatch(rule[0], s) and rule[1] != -1:
            return True
    return False

def matchToken(lexeme, rules) -> int:
    """
    Returns the token number of the lexeme if it matches any of the rules.
    Returns -1 if it does not match any of the rules.
    """
    for rule in rules:
        if re.fullmatch(rule[0], lexeme):
            return rule[1]
    return -1