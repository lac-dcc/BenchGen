#ifndef VARIABLEGENERATOR_H
#define VARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "../shared/consts.h"

/**
 * @brief Abstract base class for variable generation.
 *
 * This class defines a common interface for different types of generator variables.
 * It provides methods for common operations, which may vary in behavior depending on the specific type of variable.
 */
class GeneratorVariable {
   public:
    int id;                  // Unique identifier for the variable
    std::string name;        // Name of the variable
    std::string typeString;  // String representing the type of the variable

    virtual ~GeneratorVariable() {}

    /**
     * @brief Creates a new variable.
     *
     * This method generates code to initialize a new variable. The exact implementation depends
     * on the specific type of the variable.
     *
     * @param inFunction Indicates whether the variable is created within a function context.
     * @return A vector of strings representing the code to create the variable.
     */
    virtual std::vector<std::string> new_(bool inFunction = false) = 0;

    /**
     * @brief Generates code to perform an insertion operation on the variable.
     *
     * The exact behavior of this method depends on the type of the variable.
     *
     * @return A vector of strings representing the insertion operation code.
     */
    virtual std::vector<std::string> insert() = 0;

    /**
     * @brief Generates code to perform a removal operation on the variable.
     *
     * The behavior of this method varies depending on the type of the variable.
     *
     * @return A vector of strings representing the removal operation code.
     */
    virtual std::vector<std::string> remove() = 0;

    /**
     * @brief Generates code to perform a contains operation on the variable.
     *
     * The behavior of this method varies depending on the type of the variable.
     *
     * @param shouldReturn Indicates whether the method should generate code that returns a value based on the condition.
     * @return A vector of strings representing the code to check the condition.
     */
    virtual std::vector<std::string> contains(bool shouldReturn = false) = 0;

    /**
     * @brief Generates code to free or release resources associated with the variable.
     *
     * This method generates code to clean up or release resources held by the variable, if necessary.
     * The specific actions taken depend on the type of the variable and how resources are managed.
     *
     * @return A vector of strings representing the code to free the variable.
     */
    virtual std::vector<std::string> free() = 0;

    /**
     * @brief Generates necessary include statements for the variable.
     *
     * This method returns a vector of strings containing the required include directives
     * for working with the variable type.
     *
     * @return A vector of strings representing include directives.
     */
    virtual std::vector<std::string> genIncludes() = 0;

    /**
     * @brief Generates global variable declarations for the variable type.
     *
     * This method returns a vector of strings representing the typedefs and
     * struct definitions necessary for the specific variable type.
     *
     * @return A vector of strings, each representing a global variable or type definition.
     */
    virtual std::vector<std::string> genGlobalVars() = 0;

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
    virtual std::vector<std::string> genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) = 0;
};

class GeneratorSortedList : public GeneratorVariable {
   public:
    GeneratorSortedList() {};

    GeneratorSortedList(int id);

    ~GeneratorSortedList();

    std::vector<std::string> new_(bool inFunction = false) override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool shouldReturn = false) override;
    std::vector<std::string> free() override;
    std::vector<std::string> genIncludes() override;
    std::vector<std::string> genGlobalVars() override;
    std::vector<std::string> genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) override;
};

/**
 * @brief Class representing an array variable.
 *
 * This class provides methods for operations specific to array variables.
 */
class GeneratorArray : public GeneratorVariable {
   public:
    int totalSize;  // The total size of the array

    /**
     * @brief Default constructor for the Array class.
     */
    GeneratorArray() {};

    /**
     * @brief Constructs an Array with a specified size, values, and identifier.
     *
     * @param totalSize The size of the array.
     * @param id The unique identifier for the array.
     */
    GeneratorArray(int totalSize, int id);

    /**
     * @brief Destructor for the Array class.
     */
    ~GeneratorArray();

    std::vector<std::string> new_(bool inFunction = false) override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool shouldReturn = false) override;
    std::vector<std::string> free() override;
    std::vector<std::string> genIncludes() override;
    std::vector<std::string> genGlobalVars() override;
    std::vector<std::string> genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) override;
};

/**
 * @brief Factory class for creating generator variables.
 *
 * This class provides static methods to create instances of GeneratorVariable
 * based on a specified type, as well as methods to generate code components related to the variable type.
 */
class VariableFactory {
   public:
    static unsigned int var_counter;

    /**
     * @brief Creates a GeneratorVariable of the specified type.
     *
     * This method constructs a variable of a given type, initializing it with a unique identifier.
     * The created variable can then be used in code generation scenarios.
     *
     * @param type The type of variable to create (e.g., "array").
     * @param identifier A unique identifier for the variable.
     * @return A pointer to the created GeneratorVariable object.
     */
    static GeneratorVariable* createVariable(std::string type, int identifier);

    /**
     * @brief Generates a string representation of the variable type.
     *
     * This method creates a temporary variable of the specified type to retrieve its type string.
     *
     * @param type The type of variable to create (e.g., "array").
     * @return A string representing the type of the variable.
     */
    static std::string genTypeString(std::string type);

    /**
     * @brief Generates include statements required for the specified variable type.
     *
     * This method creates a temporary variable of the specified type to determine the necessary include
     * statements for that type.
     *
     * @param type The type of variable to create (e.g., "array").
     * @return A vector of strings representing the include directives.
     */
    static std::vector<std::string> genIncludes(std::string type);

    /**
     * @brief Generates global variable declarations for the specified variable type.
     *
     * This method creates a temporary variable of the specified type to retrieve its global variable declarations.
     *
     * @param type The type of variable to create (e.g., "array").
     * @return A vector of strings representing global variable declarations.
     */
    static std::vector<std::string> genGlobalVars(std::string type);

    /**
     * @brief Generates parameter handling code for functions using the specified variable type.
     *
     * This method creates a temporary variable of the specified type to generate code for handling
     * parameters in functions. It initializes and assigns values to the parameters.
     *
     * @param type The type of variable to create (e.g., "array").
     * @param paramName The name of the parameter.
     * @param varsParams List of variables to be used as parameters.
     * @return A vector of strings representing the code for parameter handling.
     */
    static std::vector<std::string> genParams(std::string type, std::string paramName, std::vector<GeneratorVariable*> varsParams);
};

#endif
