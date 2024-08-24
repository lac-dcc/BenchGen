#include "generatorFunction.h"

/**
 * @brief Gets the ID of the function.
 *
 * This method returns the ID associated with the current instance of the function.
 *
 * @return The ID of the function.
 */
int GeneratorFunction::getId() {
    return id;
}

/**
 * @brief Retrieves the lines of code in the function.
 *
 * This method returns a vector containing all the lines of code that have been added to the function.
 *
 * @return A vector of strings, each representing a line of code.
 */
std::vector<std::string> GeneratorFunction::getLines() {
    return lines;
}

/**
 * @brief Adds a single line of code to the function.
 *
 * Depending on the value of `insertBack`, this method either appends the line to the end of the function
 * or inserts it before the last two lines.
 *
 * @param line The line of code to add.
 */
void GeneratorFunction::addLine(std::string line) {
    if (insertBack) {
        lines.insert(lines.end() - 2, line);  // Insert before the last two lines
    } else {
        lines.push_back(line);  // Append to the end
    }
}

/**
 * @brief Adds multiple lines of code to the function.
 *
 * This method takes a vector of strings, each representing a line of code, and adds them to the function.
 * It calls the single line `addLine` method for each line in the vector.
 *
 * @param lines A vector of lines of code to add.
 */
void GeneratorFunction::addLine(std::vector<std::string> lines) {
    for (auto line : lines) {
        addLine(line);
    }
}
