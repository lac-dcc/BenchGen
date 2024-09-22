#include "grammarEnumerator.h"

bool contains(std::vector<std::string> v, std::string s) {
    return std::find(v.begin(), v.end(), s) != v.end();
}

std::vector<std::string> getNonTerminals() {
    std::vector<std::string> nonTerminals;
    for (auto const& [key, value] : grammar) {
        nonTerminals.push_back(key);
    }
    return nonTerminals;
}

void writeToFile(std::vector<std::string> s, std::ofstream* file) {
    static int count = 0;
    std::string line = std::to_string(count) + ": ";
    for (auto c : s) {
        line += c + " ";
    }
    *file << line << std::endl;
    count++;
}

void enumerateGrammar(std::ofstream* file, const int MAX_DEPTH) {
    std::string initialSymbol = grammar.begin()->first;

    const std::vector<std::string> nonTerminals = getNonTerminals();

    enumerateGrammar({initialSymbol}, &nonTerminals, 0, MAX_DEPTH, file);
}

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
        writeToFile(s, file);
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

std::vector<std::vector<std::string>> expandSymbol(std::string symbol) {
    std::vector<std::vector<std::string>> rules;
    for (auto const& [key, value] : grammar) {
        if (key == symbol) {
            rules.push_back(value);
        }
    }
    return rules;
}