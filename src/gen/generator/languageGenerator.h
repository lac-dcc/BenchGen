#ifndef LANGUAGEGENERATOR_H
#define LANGUAGEGENERATOR_H


#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "../shared/consts.h"
#include "generatorFunction.h"
#include "generatorScope.h"
#include "generatorVariable.h"


class ProgrammingLanguageGenerator
{

    public:

    GeneratorFunction mainFunction;                  // Main function for the generated program
    std::list<GeneratorFunction> functions;          // List of all functions in the generated program
    std::stack<GeneratorFunction*> currentFunction;  // Stack of current functions being generated
    std::stack<int> ifCounter;                       // Counter for managing nested if statements
    int varCounter;                                  // Counter for variables
    int loopLevel;                                   // Current nesting level of loops
    int loopCounter;                                 // Counter for loop iterations
    std::string varType;                             // Type of variables to use in the generated code
    std::map<int, GeneratorVariable*> variables;     // Map of variables by their ID
    std::stack<GeneratorScope> currentScope;         // Stack of current scopes

    ProgrammingLanguageGenerator();
    virtual ~ProgrammingLanguageGenerator();
    
    static ProgrammingLanguageGenerator* getGenerator(std::string language, std::string varType);

    /**
     * @brief Adds a line of code to the current function with optional indentation.
     *
     * @param line The line of code to add.
     * @param d Additional depth for indentation (default is 0).
     */
    virtual void addLine(std::string, int = 0);

    /**
     * @brief Adds multiple lines of code to the current function with optional indentation.
     *
     * @param lines A vector of lines of code to add.
     * @param d Additional depth for indentation (default is 0).
     */
    virtual void addLine(std::vector<std::string>, int = 0);

    /**
     * @brief Starts a new scope for variable declarations.
     *
     * Pushes a new GeneratorScope onto the scope stack, inheriting the current scope's variables and indentation.
     */
    virtual void startScope();

    virtual void endIfScope();
    /**
     * @brief Starts the definition of a new function.
     *
     * Creates a function header with specified parameters and starts a new scope for the function body.
     *
     * @param funcId The ID of the function to create.
     * @param nParameters The number of parameters the function takes.
     */
    virtual void startFunc(int, int);

    /**
     * @brief Checks if a function with a given ID already exists.
     *
     * @param funcId The ID of the function to check.
     * @return True if the function exists, false otherwise.
     */
    virtual bool functionExists(int);

    /**
     * @brief Calls a function with the specified ID and parameters.
     *
     * Generates the necessary code to call a function, passing parameters and handling the return value.
     *
     * @param funcId The ID of the function to call.
     * @param nParameters The number of parameters to pass to the function.
     */
    virtual void callFunc(int, int);

    /**
     * @brief Adds a new variable of the specified type to the current scope.
     *
     * Creates a new variable, adds it to the list of variables, and returns its ID.
     *
     * @param type The type of variable to create.
     * @return The ID of the newly created variable.
     */
    virtual int addVar(std::string);

    /**
     * @brief Frees variables in the current scope.
     *
     * Frees all variables added in the current scope, except the return variable if specified.
     *
     * @param hasReturn Specifies whether there is a return variable (default is false).
     * @param returnVarPos The position of the return variable to keep (default is 0).
     */
    virtual void freeVars(bool = false, int = 0);

    /**
     * @brief Returns a value from a function.
     *
     * Adds a return statement to the function, returning the specified variable.
     *
     * @param returnVarPos The position of the variable to return.
     */
    virtual void returnFunc(int);

    /**
     * @brief Ends the current scope.
     *
     * Pops the current scope from the stack and adds a closing brace to the code.
     */
    virtual void endScope();

    /**
     * @brief Ends the current function.
     *
     * Ends the current function scope, pops the function from the stack, and updates the if counter.
     */
    virtual void endFunc();

    /**
     * @brief Generates source and header files for the benchmark.
     *
     * Creates the necessary directory structure and writes the generated code to files.
     *
     * @param benchmarkName The name of the benchmark to generate files for.
     */
    virtual void generateFiles(std::string);
};



#endif
