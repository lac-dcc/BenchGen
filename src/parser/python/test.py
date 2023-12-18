from lexer import *

LEXER_CONFIG_FILE = "../lexer.cfg"
rules = loadLexerConfig(LEXER_CONFIG_FILE)
CODE_FILE = "../a.l"
tokens = getTokens(CODE_FILE, rules)

#print(tokens)