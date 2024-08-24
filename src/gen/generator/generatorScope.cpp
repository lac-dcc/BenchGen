#include "generatorScope.h"

/**
 * @brief Gets the number of available variables in the current scope.
 *
 * This method returns the count of variable IDs currently available in the scope.
 *
 * @return The number of available variables.
 */
int GeneratorScope::getVarCounter() {
    return avaiableVarsID.size();
}

/**
 * @brief Retrieves the current indentation level.
 *
 * This method returns the current indentation level used for formatting code.
 *
 * @return The current indentation level.
 */
int GeneratorScope::getIndentation() {
    return indentation;
}

/**
 * @brief Generates a string of tabs for code indentation.
 *
 * This method creates a string containing tabs based on the current indentation level
 * and an additional depth parameter.
 *
 * @param d Additional depth to add to the current indentation.
 * @return A string of tabs representing the indentation.
 */
std::string GeneratorScope::getIndentationTabs(int d) {
    std::string tabs = "";
    for (int i = 0; i < indentation + d; i++) {
        tabs += "   ";
    }
    return tabs;
}

/**
 * @brief Adds a variable ID to the current scope.
 *
 * This method increases the count of added variables and stores the given variable ID
 * in the list of available variable IDs.
 *
 * @param id The ID of the variable to add.
 */
void GeneratorScope::addVar(int id) {
    numberOfAddedVars++;
    avaiableVarsID.push_back(id);
}

/**
 * @brief Adds a new parameter ID to the current scope.
 *
 * This method adds a new parameter by pushing the next available parameter ID
 * to the list and returning its position.
 *
 * @return The index of the newly added parameter.
 */
int GeneratorScope::addParam() {
    avaiableParamsID.push_back(avaiableParamsID.size());
    return avaiableParamsID.size() - 1;
}
