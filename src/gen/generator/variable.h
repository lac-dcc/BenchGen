#ifndef VARIABLE_H
#define VARIABLE_H

#include <cstdlib>
#include <memory>
#include <string>
#include <vector>
using std::string;
using std::vector;

#include "../shared/enums.h"
#include "../shared/globalStructs.h"

/**
 * @brief Abstract base class for variable generation.
 *
 * This class defines a common interface for different types of generator variables.
 * It provides methods for common operations, which may vary in behavior depending on the specific type of variable.
 */
class Variable {
public:
    static int var_counter;
    int id;
    string name;
    static string type;

    virtual ~Variable() {};
    
    /**
     * @brief Generates necessary include statements for the variable.
     *
     * This method returns a vector of strings containing the required include directives
     * for working with the variable type.
     *
     * @return A vector of strings representing include directives.
     */
    static vector<string> genIncludes();

    /**
     * @brief Generates global variable declarations for the variable type.
     *
     * This method returns a vector of strings representing the typedefs and
     * struct definitions necessary for the specific variable type.
     *
     * @return A vector of strings, each representing a global variable or type definition.
     */
    static vector<string> genGlobalVars();

    /**
     * @brief Creates a new variable.
     *
     * This method generates code to initialize a new variable.
     * The exact implementation depends on the specific type of the variable.
     *
     * @param inFunction Indicates whether the variable is created within a function context.
     * @return A vector of strings representing the code to create the variable.
     */
    virtual vector<string> new_(bool inFunction = false) = 0;

    /**
     * @brief Generates code to perform an insertion operation on the variable.
     *
     * @return A vector of strings representing the insertion operation code.
     */
    virtual vector<string> insert() = 0;

    /**
     * @brief Generates code to perform a removal operation on the variable.
     *
     * @return A vector of strings representing the removal operation code.
     */
    virtual vector<string> remove() = 0;

    /**
     * @brief Generates code to perform a contains operation on the variable.
     *
     * @param shouldReturn Indicates whether the method should generate code that returns a value based on the condition.
     * @return A vector of strings representing the code to check the condition.
     */
    virtual vector<string> contains(bool shouldReturn = false) = 0;

    /**
     * @brief Generates code to free or release resources associated with the variable.
     *
     * This method generates code to clean up or release resources held by the variable, if necessary.
     * The specific actions taken depend on the type of the variable and how resources are managed.
     *
     * @return A vector of strings representing the code to free the variable.
     */
    virtual vector<string> free() = 0;

    /**
     * @brief Generates parameter handling code for functions using this variable type.
     *
     * This method generates code to handle parameters when functions utilize this variable type.
     * It includes initialization and assignment for the parameters.
     *
     * @param paramName The name of the parameter.
     * @param varsParams List of variables to be used as parameters.
     * @return A vector of strings representing the code for parameter handling.
     */
    static vector<string> genParams(string paramName, vector<Variable*> varsParams);
};

#endif
