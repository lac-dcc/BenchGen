#include "ast.h"

/**
 * @brief Prints a specified number of indentation spaces.
 *
 * This function is used to format the output, making it easier to visualize the structure
 * of the generated code or AST by indenting lines of output.
 *
 * @param indent The number of spaces to print.
 */
void printIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

/**
 * @brief Generates a condition string for an if statement.
 *
 * This function generates a conditional expression based on whether the current context is within the main function.
 * If it is, a random condition is returned. Otherwise, a condition based on the PATH variables is generated.
 *
 * @param generator The generator object used to track the current state of code generation.
 * @return A string representing the generated condition.
 */
std::string generateIfCondition(Generator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    if (isMain) {
        return "rng() & 1";
    }
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    int bit = std::pow(2, ifCounter % 64);
    std::string condition = "PATH" + std::to_string(pathNumber) + " & " + std::to_string(bit);
    return condition;
}

// Generation Methods

/**
 * @brief Generates code for a sequence of statements.
 *
 * This function recursively generates code for the statement and the following code block.
 *
 * @param generator The generator object used to manage code generation.
 */
void StatementCode::gen(Generator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

/**
 * @brief Generates code for a lambda expression.
 *
 * This function does not generate any code.
 *
 * @param generator The generator object used to manage code generation.
 */
void LambdaCode::gen(Generator& generator) {
    // No operation for lambda code generation
}

/**
 * @brief Generates code for an identifier.
 *
 * Currently, this function does not specify any behavior for handling identifiers.
 *
 * @param generator The generator object used to manage code generation.
 */
void Id::gen(Generator& generator) {
    // TODO: What to do with ids?
}

/**
 * @brief Generates code for an insert operation.
 *
 * This function selects a variable from the current scope and generates the insert code.
 *
 * @param generator The generator object used to manage code generation.
 */
void Insert::gen(Generator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);
}

/**
 * @brief Generates code for a remove operation.
 *
 * This function selects a variable from the current scope and generates the remove code.
 *
 * @param generator The generator object used to manage code generation.
 */
void Remove::gen(Generator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
}

/**
 * @brief Generates code for creating a new variable.
 *
 * This function generates code to create a new variable based on the current function's context.
 *
 * @param generator The generator object used to manage code generation.
 */
void New::gen(Generator& generator) {
    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

/**
 * @brief Generates code for a contains operation.
 *
 * This function selects a variable from the current scope and generates the contains code.
 *
 * @param generator The generator object used to manage code generation.
 */
void Contains::gen(Generator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

/**
 * @brief Generates code for a loop structure.
 *
 * This function generates code for a loop, including initialization, condition,
 * and the loop body. It also manages the scope of variables within the loop.
 *
 * @param generator The generator object used to manage code generation.
 */
void Loop::gen(Generator& generator) {
    std::string loopVar = "loop" + std::to_string(generator.loopCounter);
    std::string loopVarLine = "unsigned int " + loopVar + " = 0;";
    generator.addLine(loopVarLine);

    std::string loopLimitVar = "loopLimit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "(rand()%loopsFactor)/" + std::to_string(generator.loopLevel + 1) + " + 1";
    std::string loopLimitLine = "unsigned int " + loopLimitVar + " = " + loopLimitValue + ";";
    generator.addLine(loopLimitLine);

    std::string forLine = "for(; " + loopVar + " < " + loopLimitVar + "; " + loopVar + "++) {";
    generator.addLine(forLine);

    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
}

/**
 * @brief Generates code for a function call.
 *
 * This function generates code to call and/or create a function and manages the function's parameters and return values.
 *
 * @param generator The generator object used to manage code generation.
 */
void Call::gen(Generator& generator) {
    int nParameters = std::ceil(conditionalCounts / 64.0);
    generator.callFunc(id, nParameters);
    if (!generator.functionExists(id)) {
        generator.startFunc(id, nParameters);
        code->gen(generator);
        if (generator.currentScope.top().avaiableVarsID.size() == 0) {
            int id = generator.addVar(generator.varType);
            std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
            generator.addLine(lines);
        }
        int varCount = generator.currentScope.top().avaiableVarsID.size();
        int returnVarPos = rand() % varCount;
        generator.freeVars(true, returnVarPos);
        generator.returnFunc(returnVarPos);
        generator.endFunc();
    }
}

/**
 * @brief Generates code for a sequence of operations.
 *
 * This function currently does not specify any behavior for handling sequences.
 *
 * @param generator The generator object used to manage code generation.
 */
void Seq::gen(Generator& generator) {
    // TODO: What to do with sequences?
}

/**
 * @brief Generates code for an if statement.
 *
 * This function generates code for an if statement.
 *
 * @param generator The generator object used to manage code generation.
 */
void If::gen(Generator& generator) {
    ifParam->gen(generator);
}

/**
 * @brief Generates code for the parameters of an if statement.
 *
 * This function generates the code for an if statement and the corresponding else clause.
 *
 * @param generator The generator object used to manage code generation.
 */
void IfParam::gen(Generator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if(" + condition + ") {";
    generator.addLine(line);
    generator.startScope();
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    else_->gen(generator);
}

/**
 * @brief Generates code for an if statement with no parameters.
 *
 * This function generates the code for an if statement without any parameters and handles the corresponding else clause.
 *
 * @param generator The generator object used to manage code generation.
 */
void NoParamIf::gen(Generator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if(" + condition + ") {}";
    generator.addLine(line);
    else_->gen(generator);
}

/**
 * @brief Generates code for an else clause with a code block.
 *
 * This function generates the code for an else clause that includes a block of code.
 *
 * @param generator The generator object used to manage code generation.
 */
void CodeElse::gen(Generator& generator) {
    std::string line = "else {";
    generator.addLine(line);
    generator.startScope();
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
}

/**
 * @brief Generates code for an else clause with no code block.
 *
 * This function does not generate any code.
 *
 * @param generator The generator object used to manage code generation.
 */
void NoCodeElse::gen(Generator& generator) {
    // No operation for no-code else generation
}

// Printing Methods

/**
 * @brief Prints the structure of a statement code node.
 *
 * This function prints the details of a statement code node and recursively prints its child nodes.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void StatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

/**
 * @brief Prints the structure of a lambda code node.
 *
 * This function prints the details of a lambda code node.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void LambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

/**
 * @brief Prints the structure of an identifier node.
 *
 * This function prints the details of an identifier node, including the identifier's text.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Id::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

/**
 * @brief Prints the structure of an insert operation node.
 *
 * This function prints the details of an insert operation node.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Insert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

/**
 * @brief Prints the structure of a remove operation node.
 *
 * This function prints the details of a remove operation node.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Remove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

/**
 * @brief Prints the structure of a new operation node.
 *
 * This function prints the details of a new operation node.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void New::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

/**
 * @brief Prints the structure of a contains operation node.
 *
 * This function prints the details of a contains operation node.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Contains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

/**
 * @brief Prints the structure of a loop node.
 *
 * This function prints the details of a loop node and recursively prints its child nodes.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Loop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

/**
 * @brief Prints the structure of a call node.
 *
 * This function prints the details of a call node and recursively prints its child nodes.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Call::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

/**
 * @brief Prints the structure of a sequence node.
 *
 * This function prints the details of a sequence node.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void Seq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

/**
 * @brief Prints the structure of an if node.
 *
 * This function prints the details of an if node and recursively prints its child nodes.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void If::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    ifParam->print(ident + 2);
}

/**
 * @brief Prints the structure of an if parameter node.
 *
 * This function prints the details of an if parameter node and recursively prints its child nodes.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void IfParam::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "IfParam" << std::endl;
    code->print(ident + 2);
    else_->print(ident + 2);
}

/**
 * @brief Prints the structure of a no-parameter if node.
 *
 * This function prints the details of a no-parameter if node and recursively prints its child nodes.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void NoParamIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "NoParamIf" << std::endl;
    else_->print(ident + 2);
}

/**
 * @brief Prints the structure of an else node with a code block.
 *
 * This function prints the details of an else node that includes a block of code.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void CodeElse::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "CodeElse" << std::endl;
    code->print(ident + 2);
}

/**
 * @brief Prints the structure of an else node with no code block.
 *
 * This function prints the details of an else node that does not include a block of code.
 *
 * @param ident The number of spaces to indent the output for this node.
 */
void NoCodeElse::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "NoCodeElse" << std::endl;
}
