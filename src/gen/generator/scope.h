#ifndef SCOPE_H
#define SCOPE_H

#include <vector>
using std::vector;

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "variable.h"

/**
 * @brief The GeneratorScope class manages scopes in the generator.
 *
 * This class is responsible for handling the scope of variables and parameters, managing
 * indentation levels, and tracking the number of variables added to the current scope.
 */
class Scope {
private:
    int depth; // The current level of indentation for the scope

public:
    int varCount = 0;               // Number of variables in this scope
    vector<int> availableVarIDs;     // List of available variable IDs in this scope
    vector<int> availableParamIDs;   // List of available parameter IDs in this scope

    /**
     * @brief Constructs a GeneratorScope with an optional initial indentation level.
     *
     * Initializes a new scope with no variables or parameters and a specified level of indentation.
     *
     * @param identation The initial level of indentation (default is 1).
     */
    Scope(int depth = 1) : depth(depth) { }

    /**
     * @brief Constructs a GeneratorScope based on a parent scope.
     *
     * Initializes a new scope by inheriting variables, parameters, and indentation from a parent scope.
     *
     * @param parentVars List of variable IDs from the parent scope.
     * @param parentParams List of parameter IDs from the parent scope.
     * @param parentDepth The indentation level of the parent scope.
     */
    Scope(const Scope& parent) {
        this->availableVarIDs = parent.availableVarIDs;
        this->availableParamIDs = parent.availableParamIDs;
        this->depth = parent.depth + 1;
    }

    ~Scope() {}

    /**
     * @brief Gets the number of available variables in the current scope.
     *
     * @return The number of available variables.
     */
    int getVarCounter();

    /**
     * @brief Retrieves the current indentation level.
     *
     * @return The current indentation level.
     */
    int getDepth();

    /**
     * @brief Generates a string of tabs for code indentation.
     *
     * This method creates a string containing tabs based on the current indentation level
     * and an additional depth parameter.
     *
     * @param d Additional depth to add to the current indentation (default is 0).
     * @return A string of spaces representing the indentation.
     */
    std::string generateSpaces(int d = 0);

    /**
     * @brief Adds a variable ID to the current scope.
     *
     * Increases the count of added variables and stores the given variable ID
     * in the list of available variable IDs.
     *
     * @param id The ID of the variable to add.
     */
    void addVar(int id);

    /**
     * @brief Adds a new parameter ID to the current scope.
     *
     * Adds a new parameter by pushing the next available parameter ID to the list
     * and returning its position.
     *
     * @return The index of the newly added parameter.
     */
    int addParam();
};

#endif
