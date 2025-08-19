#ifndef JULIAGENERATOR_H
#define JULIAGENERATOR_H
#include <filesystem>
#include <fstream>
#include <iostream>

#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../../shared/consts.h"
#include "../generatorFunction.h"
#include "../generatorScope.h"
#include "../generatorVariable.h"
#include "../languageGenerator.h"


/**
 * @brief The Generator class handles the generation of code and files for benchmarks.
 *
 * This class manages the creation of variables, functions, scopes, and file outputs
 * required for generating complete benchmark programs.
 */
class JuliaGenerator : public ProgrammingLanguageGenerator {
   private:
    std::vector<std::string> includes;    // List of include statements for the generated code
    std::vector<std::string> globalVars;  // List of global variable declarations

    /**
     * @brief Generates the necessary include statements.
     *
     * Adds standard and variable-specific include directives to the generated code.
     */
    void generateIncludes();

    /**
     * @brief Generates global variables for the generated code.
     *
     * Calls variable-specific methods to add global variable declarations.
     */
    void generateGlobalVars();

    /**
     * @brief Generates the main function for the generated code.
     *
     * Sets up the structure and necessary initializations for the main function.
     */
    void generateMainFunction();

    /**
     * @brief Generates a random number generator function.
     *
     * Creates a function that returns a 64-bit random number by combining two 32-bit numbers.
     */
    void generateRandomNumberGenerator();

    /**
     * @brief Creates a parameter object to pass into a function.
     *
     * Generates the parameter name, creates the parameter object, and adds the necessary code lines.
     *
     * @return The name of the created parameter object.
     */
    std::string createParams();

    /**
     * @brief Generates a Makefile for compiling the benchmark.
     *
     * Creates a Makefile with rules for compiling the generated source files into an executable.
     *
     * @param dir The directory where the Makefile should be created.
     * @param target The target executable name.
     */
    void genMakefile(std::string dir, std::string target);

    /**
     * @brief Generates a README file for the generated program.
     *
     * Creates a README file with information about the benchmark program.
     *
     * @param dir The directory where the README file should be created.
     * @param target The target executable name.
     */
    void genReadme(std::string dir, std::string target);

   public:

    /**
     * @brief Constructs a Generator object with a specified variable type.
     *
     * Initializes various counters, sets the variable type, and prepares the initial scope.
     * Generates necessary includes, global variables, random number generator, and the main function.
     *
     * @param variableType The type of variable to be used in code generation.
     */
    JuliaGenerator(std::string variableType);

    /**
     * @brief Destructor for the Generator class.
     *
     * Cleans up dynamically allocated variables.
     */
    ~JuliaGenerator() {
        for (auto& vpair : variables) {
            delete vpair.second;
        }
    }

    /**
     * @brief Adds a line of code to the current function with optional indentation.
     *
     * @param line The line of code to add.
     * @param d Additional depth for indentation (default is 0).
     */
    void addLine(std::string, int = 0) override;

    /**
     * @brief Adds multiple lines of code to the current function with optional indentation.
     *
     * @param lines A vector of lines of code to add.
     * @param d Additional depth for indentation (default is 0).
     */
    void addLine(std::vector<std::string>, int = 0) override;

    /**
     * @brief Starts a new scope for variable declarations.
     *
     * Pushes a new GeneratorScope onto the scope stack, inheriting the current scope's variables and indentation.
     */
    void startScope() override;

    /**
     * @brief Starts the definition of a new function.
     *
     * Creates a function header with specified parameters and starts a new scope for the function body.
     *
     * @param funcId The ID of the function to create.
     * @param nParameters The number of parameters the function takes.
     */
    void startFunc(int, int) override;

    /**
     * @brief Checks if a function with a given ID already exists.
     *
     * @param funcId The ID of the function to check.
     * @return True if the function exists, false otherwise.
     */
    bool functionExists(int) override;

    /**
     * @brief Calls a function with the specified ID and parameters.
     *
     * Generates the necessary code to call a function, passing parameters and handling the return value.
     *
     * @param funcId The ID of the function to call.
     * @param nParameters The number of parameters to pass to the function.
     */
    void callFunc(int, int) override;

    /**
     * @brief Adds a new variable of the specified type to the current scope.
     *
     * Creates a new variable, adds it to the list of variables, and returns its ID.
     *
     * @param type The type of variable to create.
     * @return The ID of the newly created variable.
     */
    int addVar(std::string) override;

    /**
     * @brief Frees variables in the current scope.
     *
     * Frees all variables added in the current scope, except the return variable if specified.
     *
     * @param hasReturn Specifies whether there is a return variable (default is false).
     * @param returnVarPos The position of the return variable to keep (default is 0).
     */
    void freeVars(bool = false, int = 0) override;

    /**
     * @brief Returns a value from a function.
     *
     * Adds a return statement to the function, returning the specified variable.
     *
     * @param returnVarPos The position of the variable to return.
     */
    void returnFunc(int) override;

    /**
     * @brief Ends the current scope.
     *
     * Pops the current scope from the stack and adds a closing brace to the code.
     */
    void endScope() override;

    /**
     * @brief Ends the current function.
     *
     * Ends the current function scope, pops the function from the stack, and updates the if counter.
     */
    void endFunc() override;

    /**
     * @brief Generates source and header files for the benchmark.
     *
     * Creates the necessary directory structure and writes the generated code to files.
     *
     * @param benchmarkName The name of the benchmark to generate files for.
     */
    void generateFiles(std::string) override;
};

#endif
