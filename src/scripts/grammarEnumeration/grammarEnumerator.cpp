#include "grammarEnumerator.h"

/**
 * @brief Checks if a given string exists in a vector of strings.
 *
 * @param v The vector of strings to search.
 * @param s The string to find in the vector.
 * @return True if the string is found, false otherwise.
 */
bool contains(std::vector<std::string> v, std::string s) {
    return std::find(v.begin(), v.end(), s) != v.end();
}

/**
 * @brief Retrieves all non-terminal symbols from the grammar.
 *
 * @return A vector containing all non-terminal symbols.
 */
std::vector<std::string> getNonTerminals() {
    std::vector<std::string> nonTerminals;
    for (auto const& [key, value] : grammar) {
        nonTerminals.push_back(key);
    }
    return nonTerminals;
}

/**
 * @brief Writes a given program structure to an output file in a specific format.
 *
 * @param s A pointer to a vector representing the program structure.
 * @param file A pointer to the output file stream.
 */
void writeToFile(const std::vector<std::string>* s, std::ofstream* file) {
    static int count = 0;
    std::string line = std::to_string(count) + ": \nSS: A\nA = ";
    int i = 0;
    for (; i < s->size(); i++) {
        if (s->at(i) == "\n") {
            break;
        } else {
            line += s->at(i) + " ";
        }
    }
    line += ";\nB = ";
    for (i++; i < s->size(); i++) {
        line += s->at(i) + " ";
    }
    line += ";";
    *file << line << std::endl;
    count++;
}

/**
 * @brief Starts the grammar enumeration process with the initial symbol.
 *
 * @param file A pointer to the output file stream.
 * @param MAX_DEPTH The maximum recursion depth allowed.
 */
void enumerateGrammar(std::ofstream* file, const int MAX_DEPTH) {
    std::string initialSymbol = grammar.begin()->first;

    const std::vector<std::string> nonTerminals = getNonTerminals();

    enumerateGrammar({initialSymbol}, &nonTerminals, 0, MAX_DEPTH, file);
}

/**
 * @brief Recursively enumerates all possible expansions of a grammar up to a maximum depth.
 *
 * @param s A vector representing the current grammar state.
 * @param nonTerminals A pointer to the list of non-terminal symbols.
 * @param cDepth The current recursion depth.
 * @param MAX_DEPTH The maximum recursion depth allowed.
 * @param file A pointer to the output file stream.
 */
void enumerateGrammar(std::vector<std::string> s, const std::vector<std::string>* nonTerminals, int cDepth, const int MAX_DEPTH, std::ofstream* file) {
    // Write if the code has only terminals left
    bool hasNonTerminal = false;
    for (auto c : s) {
        if (contains(*nonTerminals, c)) {
            hasNonTerminal = true;
            break;
        }
    }
    if (!hasNonTerminal) {
        std::vector<std::vector<std::string>> programs = addLineBreak(&s);
        for (auto program : programs) {
            writeToFile(&program, file);
        }
        return;
    }

    // Stop if reached MAX_DEPTH
    if (cDepth >= MAX_DEPTH) {
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        if (contains(*nonTerminals, s[i])) {
            std::vector<std::vector<std::string>> rules = expandSymbol(s[i]);
            for (auto rule : rules) {
                std::vector<std::string> newS = s;
                newS.erase(newS.begin() + i);
                newS.insert(newS.begin() + i, rule.begin(), rule.end());
                enumerateGrammar(newS, nonTerminals, cDepth + 1, MAX_DEPTH, file);
            }
            return;  // Stop in the first non-terminal found. Otherwise, it will generate duplicates
        }
    }
}

/**
 * @brief Expands a non-terminal symbol by retrieving all associated production rules.
 *
 * @param symbol The non-terminal symbol to expand.
 * @return A vector of production rules, where each rule is represented as a vector of strings.
 */
std::vector<std::vector<std::string>> expandSymbol(std::string symbol) {
    std::vector<std::vector<std::string>> rules;
    for (auto const& [key, value] : grammar) {
        if (key == symbol) {
            rules.push_back(value);
        }
    }
    return rules;
}

/**
 * @brief Adds a line break at all possible positions in a given program structure.
 *
 * @param s A pointer to a vector representing the program structure.
 * @return A vector of program structures with line breaks inserted.
 */
std::vector<std::vector<std::string>> addLineBreak(const std::vector<std::string>* s) {
    std::vector<std::vector<std::string>> programs;
    int parenCount = 0;
    for (int pos = 0; pos < s->size() + 1; pos++) {
        if (pos < s->size()) {
            std::string symbol = s->at(pos);
            if (symbol == "(") {
                parenCount++;
                continue;
            } else if (symbol == ")") {
                parenCount--;
                continue;
            } else if (parenCount > 0) {
                continue;
            }
        }
        std::vector<std::string> program = *s;
        program.insert(program.begin() + pos, "\n");
        programs.push_back(program);
    }
    return programs;
}