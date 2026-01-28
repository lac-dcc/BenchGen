#ifndef GENERATOR_H
#define GENERATOR_H

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using std::vector;
using std::string;
using std::stack;

#include "../ast/ast.h"

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "function.h"
#include "scope.h"
#include "variable.h"

/**
 * @brief The Generator class handles the generation of code and files for benchmarks.
 *
 * This class manages the creation of variables, functions, scopes, and file outputs
 * required for generating complete benchmark programs.
 */
template<typename VarType>
class Generator : public Visitor {
protected:
    string includes;    // Include statements for the generated code
    string globalVars;  // Global variable declarations 
    stack<int> path_stack;

    void path_stack_init() {
        path_stack.push(1);
    }

    int get_mask() {
        return 1 << (path_stack.top() - 1);
    }

    /**
     * @brief Generates the necessary include statements.
     *
     * Adds standard and variable-specific include directives to the generated code.
     */
    virtual void generateIncludes() = 0;

    /**
     * @brief Generates global variables for the generated code.
     *
     * Calls variable-specific methods to add global variable declarations.
     */
    void generateGlobalVars() {
        globalVars = VarType::genGlobalVars();
    }

    /**
     * @brief Generates the main function for the generated code.
     *
     * Sets up the structure and necessary initializations for the main function.
     */
    virtual void generateMainFunction() = 0;

    /**
     * @brief Generates a random number generator function.
     *
     * Creates a function that returns a 64-bit random number by combining two 32-bit numbers.
     */
    virtual void generateRandomNumberGenerator() = 0;

    /**
     * @brief Creates a parameter object to pass into a function.
     *
     * Generates the parameter name, creates the parameter object, and adds the necessary code lines.
     *
     * @return The name of the created parameter object.
     */
    virtual string createParams() = 0;

    /**
     * @brief Generates a Makefile for compiling the benchmark.
     *
     * Creates a Makefile with rules for compiling the generated source files into an executable.
     *
     * @param dir The directory where the Makefile should be created.
     * @param target The target executable name.
     */
    virtual void genMakefile(std::filesystem::path dir, string target) = 0;

    /**
     * @brief Generates a README file for the generated program.
     *
     * Creates a README file with information about the benchmark program.
     *
     * @param dir The directory where the README file should be created.
     * @param target The target executable name.
     */
    virtual void genReadme(std::filesystem::path dir, string target) = 0;

public:
    Function mainFunction;                          // Main function for the generated program
    std::list<Function> functions;                  // List of all functions in the generated program
    std::stack<Function*> currentFunction;          // Stack of current functions being generated
    std::stack<int> ifCounter;                      // Counter for managing nested if statements
    int varCounter = 0;                             // Counter for variables
    int loopLevel = 0;                              // Current nesting level of loops
    int loopCounter = 0;                            // Counter for loop iterations
    std::map<int, Variable*> variables;             // Map of variables by their ID
    std::stack<Scope> currentScope;                 // Stack of current scopes

    // Visitor methods
    virtual void visit(const Statement& s) override {
        s.stmt->accept(*this);
        s.code->accept(*this);
    }

    virtual void visit(const Lambda&) override {
    }

    virtual void visit(const Id&) override {
    }
    
    virtual void visit(const Seq&) override {
    }
    
    virtual void visit(const New&) override {
        int id = addVar();
        addLine(variables[id]->new_(!(currentFunction.top()->isMainFunction)));
    }
    
    virtual void visit(const Insert&) override {
        int varCount = currentScope.top().availableVarIDs.size();
        if (varCount == 0) return;

        int varPos = rand() % varCount;
        Variable* var = variables[currentScope.top().availableVarIDs[varPos]];
        addLine(var->insert());
    }
    
    virtual void visit(const Remove&) override {
        int varCount = currentScope.top().availableVarIDs.size();
        if (varCount == 0) return;

        int varPos = rand() % varCount;
        Variable* var = variables[currentScope.top().availableVarIDs[varPos]];
        addLine(var->remove());
    }
    
    virtual void visit(const Contains&) override {
        int varCount = currentScope.top().getVarCounter();
        if (varCount == 0) return;

        int varPos = rand() % varCount;
        Variable* var = variables[currentScope.top().availableVarIDs[varPos]];
        addLine(var->contains(!(currentFunction.top()->isMainFunction)));
    }

    virtual void visit(const Loop&) override = 0;
    virtual void visit(const Call&) override = 0;
    virtual void visit(const If&) override = 0;

    /**
     * @brief Constructs a Generator object with a specified variable type.
     *
     * Initializes various counters, sets the variable type, and prepares the initial scope.
     * Generates necessary includes, global variables, random number generator, and the main function.
     */
    Generator() {
        ifCounter.push(0);
        currentScope.push(Scope(0));
    }

    void init() {
        path_stack_init();
        generateIncludes();
        generateGlobalVars();
        generateRandomNumberGenerator();
        generateMainFunction();
    }

    /**
     * @brief Destructor for the Generator class.
     *
     * Cleans up dynamically allocated variables.
     */
    ~Generator() {
        for (auto& v : variables)
            delete v.second;
    }

    /**
     * @brief Adds code to the current function with optional indentation.
     *
     * @param line The line of code to add.
     * @param d Additional depth for indentation (default is 0).
     */
    void addLine(string line, int d = 0) {
        line = currentScope.top().generateSpaces(d) + line;
        currentFunction.top()->addLine(line);
    }

    /**
     * @brief Starts a new scope for variable declarations.
     *
     * Pushes a new GeneratorScope onto the scope stack, inheriting the current scope's variables and indentation.
     */
    void startScope() {     
        Scope scope = Scope(currentScope.top());
        currentScope.push(scope);
    }
    
    /**
     * @brief Checks if a function with a given ID already exists.
     *
     * @param funcId The ID of the function to check.
     * @return true if the function exists, false otherwise.
     */
    bool functionExists(int funcId) {
        for (auto func : functions)
            if (func.getId() == funcId)
                return true;
        return false;
    }
    
    /**
     * @brief Adds a new variable of the specified type to the current scope.
     *
     * Creates a new variable, adds it to the list of variables, and returns its ID.
     *
     * @tparam type The type of variable to create.
     * @return The ID of the newly created variable.
     */
    int addVar() {
        this->variables[varCounter] = new VarType(varCounter);
        this->currentScope.top().addVar(varCounter);
        return varCounter++;
    }
    
    /**
     * @brief Frees variables in the current scope.
     *
     * Frees all variables added in the current scope, except the return variable if specified.
     *
     * @param hasReturn Specifies whether there is a return variable (default is false).
     * @param returnVar The position of the return variable to keep (default is 0).
     */
    void freeVars(bool hasReturn = false, int returnVar = 0) {
        int numberOfAddedVars = currentScope.top().varCount;
        vector<int> availableVarIDs = currentScope.top().availableVarIDs;
        for (int i = 0; i < numberOfAddedVars; i++) {
            int varPos = availableVarIDs.size() - i - 1;
            if (!hasReturn || varPos != returnVar) {
                Variable* var = variables[availableVarIDs[varPos]];
                addLine(var->free());
            }
        }
    }
    
    /**
     * @brief Ends the current scope.
     *
     * Pops the current scope from the stack and adds a closing brace to the code.
     */
    void endScope() {
        string line = currentScope.top().generateSpaces(-1) + "}";
        currentFunction.top()->addLine(line);
        currentScope.pop();
    }

    /**
     * @brief Ends the current function.
     *
     * Ends the current function scope, pops the function from the stack, and updates the if counter.
     */
    void endFunc() {
        endScope();
        currentFunction.pop();
        ifCounter.pop();
    }

    /**
     * @brief Starts the definition of a new function.
     *
     * Creates a function header with specified parameters and starts a new scope for the function body.
     *
     * @param funcId The ID of the function to create.
     * @param nParams The number of parameters the function takes.
     */
    virtual void startFunc(int funcId, int nParams) = 0;

    /**
     * @brief Calls a function with the specified ID and parameters.
     *
     * Generates the necessary code to call a function, passing parameters and handling the return value.
     *
     * @param funcId The ID of the function to call.
     * @param nParams The number of parameters to pass to the function.
     */
    void callFunc(int funcId, int nParams);

    /**
     * @brief Returns a value from a function.
     *
     * Adds a return statement to the function, returning the specified variable.
     *
     * @param returnVar The position of the variable to return.
     */
    void returnFunc(int returnVar);

    /**
     * @brief Generates source and header files for the benchmark.
     *
     * Creates the necessary directory structure and writes the generated code to files.
     */
    virtual void generateFiles(std::filesystem::path) = 0;
};

#endif
