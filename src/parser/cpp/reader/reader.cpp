#include "reader.h"

#include <fstream>
#include <vector>

using std::ifstream;

vector<string> readFile(string fileName) {
    vector<string> code = {};
    ifstream file("./" + fileName);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            code.push_back(line);
        }
        file.close();
    } else {
        // TODO: Error handling: file not found
    }
    return code;
}