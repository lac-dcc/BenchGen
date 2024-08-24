#include "generatorVariable.h"

/**
 * @brief Factory method to create a GeneratorVariable of a specified type.
 *
 * This method creates a new variable of the specified type and initializes it with
 * default values.
 *
 * @param type The type of variable to create (e.g., "array").
 * @param identifier A unique identifier for the variable.
 * @return A pointer to the created GeneratorVariable object.
 */
GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if (type == VarTypes::ARRAY) {
        int size = rand() % 1000;  // Random size for the array
        return new Array(size, identifier);
    }
    // TODO: Error Handling
    return nullptr;
}

// ARRAY

/**
 * @brief Constructor for the Array class.
 *
 * Initializes an Array object with a specified size, values, and identifier.
 *
 * @param size The size of the array.
 * @param id The unique identifier for the array.
 */
Array::Array(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

/**
 * @brief Generates code to create a new array variable.
 *
 * This method returns a vector of strings, each representing a line of code to
 * initialize a new array variable. If the array is created within a function,
 * it includes additional logic to handle memory allocation.
 *
 * @param inFunction A boolean indicating whether the array is being created inside a function.
 * @return A vector of strings, each representing a line of code.
 */
std::vector<std::string> Array::new_(bool inFunction) {
    std::vector<std::string> temp = {this->typeString + " " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars->data[--pCounter];");
        temp.push_back("   " + this->name + ".refC++;");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + ".size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + ".refC = 1;");
        temp.push_back("   " + this->name + ".data = (unsigned int*)malloc(" + this->name + ".size*sizeof(unsigned int));");
        temp.push_back("   memset(" + this->name + ".data, 0, " + this->name + ".size*sizeof(unsigned int));");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + ".size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + ".refC = 1;");
        temp.push_back(this->name + ".data = (unsigned int*)malloc(" + this->name + ".size*sizeof(unsigned int));");
        temp.push_back("memset(" + this->name + ".data, 0, " + this->name + ".size*sizeof(unsigned int));");
    }
    return temp;
}

/**
 * @brief Generates code to insert elements into the array.
 *
 * This method returns a vector of strings representing the lines of code
 * required to increment each element of the array.
 *
 * @return A vector of strings, each representing a line of code.
 */
std::vector<std::string> Array::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + ".size; i++) {"};
    temp.push_back("   " + this->name + ".data[i]++;");
    temp.push_back("}");
    return temp;
}

/**
 * @brief Generates code to remove elements from the array.
 *
 * This method returns a vector of strings representing the lines of code
 * required to decrement each element of the array.
 *
 * @return A vector of strings, each representing a line of code.
 */
std::vector<std::string> Array::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + ".size; i++) {"};
    temp.push_back("   " + this->name + ".data[i]--;");
    temp.push_back("}");
    return temp;
}

/**
 * @brief Generates code to check if the array contains a specific value.
 *
 * This method returns a vector of strings representing the lines of code
 * required to search for a specific value in the array. It can also handle
 * the return of the array if specified.
 *
 * @param shouldReturn A boolean indicating whether to return the array if the value is found.
 * @return A vector of strings, each representing a line of code.
 */
std::vector<std::string> Array::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + this->name + ".size; i++) {");
    temp.push_back("   if (" + this->name + ".data[i] == " + std::to_string(compare) + ") { ");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      " + this->name + ".data[i] += " + std::to_string(compare) + ";");
    }
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

/**
 * @brief Generates code to free the memory allocated for the array.
 *
 * This method returns a vector of strings representing the lines of code
 * required to free the memory if the reference count drops to zero.
 *
 * @return A vector of strings, each representing a line of code.
 */
std::vector<std::string> Array::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".refC--;");
    temp.push_back("if(" + this->name + ".refC == 0) {");
    temp.push_back("   free(" + this->name + ".data);");
    temp.push_back("}");
    return temp;
}

/**
 * @brief Generates the necessary include statements for array operations.
 *
 * This method returns a vector of strings containing the required include directives
 * for working with arrays.
 *
 * @return A vector of strings, each representing an include directive.
 */
std::vector<std::string> Array::genIncludes() {
    std::vector<std::string> temp = {};
    temp.push_back("#include <string.h>");
    return temp;
}

/**
 * @brief Generates global variable declarations for array structures.
 *
 * This method returns a vector of strings representing the typedefs and
 * struct definitions necessary for array operations.
 *
 * @return A vector of strings, each representing a global variable or type definition.
 */
std::vector<std::string> Array::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("typedef struct {");
    temp.push_back("   unsigned int* data;");
    temp.push_back("   size_t size;");
    temp.push_back("   size_t refC;");
    temp.push_back("} " + this->typeString + ";");
    temp.push_back("typedef struct {");
    temp.push_back("   Array* data;");
    temp.push_back("   size_t size;");
    temp.push_back("} " + this->typeString + "Param;");
    return temp;
}

/**
 * @brief Generates parameter handling code for functions using arrays.
 *
 * This method returns a vector of strings representing the lines of code
 * required to initialize and handle parameters of type array in functions.
 *
 * @param paramName The name to use for the parameter.
 * @param varsParams The list of variables to be passed as parameters.
 * @return A vector of strings, each representing a line of code for parameter handling.
 */
std::vector<std::string> Array::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back(this->typeString + "Param " + paramName + ";");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    temp.push_back(paramName + ".data = (" + this->typeString + "*)malloc(" + paramName + ".size*sizeof(" + this->typeString + "));");
    for (int i = 0; i < varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }
    return temp;
}

/**
 * @brief Destructor for the Array class.
 *
 * This destructor currently does not perform any specific actions.
 */
Array::~Array() {
}
