#include "grammarEnumerator.h"

int main(int argc, char const* argv[]) {
    if (argc != 2) {
        std::cout << "ERROR! Missing arguments!" << std::endl;
        std::cout << "Please provide the depth of code generation" << std::endl;
        return 1;
    }

    const int DEPTH = std::stoi(argv[1]);

    std::filesystem::create_directory("results");
    std::ofstream ssFile;
    ssFile.open("results/programs.txt");
    enumerateGrammar(&ssFile, DEPTH);
    ssFile.close();

    return 0;
}