#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include <map>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "generatorVariable.h"

/**
 * @brief The GeneratorScope class manages scopes in the generator.
 *
 * This class is responsible for handling the scope of variables and parameters, managing
 * indentation levels, and tracking the number of variables added to the current scope.
 */
class GeneratorScope {
   private:
    int indentation;  // The current level of indentation for the scope

   public:
    int numberOfAddedVars;              // Number of variables added to this scope
    std::vector<int> avaiableVarsID;    // List of available variable IDs in this scope
    std::vector<int> avaiableParamsID;  // List of available parameter IDs in this scope

    /**
     * @brief Constructs a GeneratorScope with an optional initial indentation level.
     *
     * Initializes a new scope with no variables or parameters and a specified level of indentation.
     *
     * @param identation The initial level of indentation (default is 1).
     */
    GeneratorScope(int identation = 1) {
        avaiableVarsID = {};
        avaiableParamsID = {};
        numberOfAddedVars = 0;
        this->indentation = identation;
    }

    /**
     * @brief Constructs a GeneratorScope based on a parent scope.
     *
     * Initializes a new scope by inheriting variables, parameters, and indentation from a parent scope.
     *
     * @param parentVars List of variable IDs from the parent scope.
     * @param parentParams List of parameter IDs from the parent scope.
     * @param parentIndentation The indentation level of the parent scope.
     */
    GeneratorScope(std::vector<int> parentVars, std::vector<int> parentParams, int parentIndentation) {
        this->avaiableVarsID = parentVars;
        this->avaiableParamsID = parentParams;
        this->numberOfAddedVars = 0;
        this->indentation = parentIndentation + 1;
    }

    /**
     * @brief Destructor for the GeneratorScope class.
     *
     * Currently, this destructor does not perform any special operations.
     */
    ~GeneratorScope() {}

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
    int getIndentation();

    /**
     * @brief Generates a string of tabs for code indentation.
     *
     * This method creates a string containing tabs based on the current indentation level
     * and an additional depth parameter.
     *
     * @param d Additional depth to add to the current indentation (default is 0).
     * @return A string of tabs representing the indentation.
     */
    std::string getIndentationTabs(int = 0);

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
