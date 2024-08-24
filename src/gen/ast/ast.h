#ifndef AST_H
#define AST_H

#include <cmath>

#include "../generator/generator.h"
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

/**
 * @brief Prints a specified number of indentation spaces.
 *
 * Used for formatting output to visualize the structure of the AST.
 *
 * @param indent The number of spaces to print.
 */
void printIndentationSpaces(int indent);

/**
 * @brief Generates a condition string for an if statement.
 *
 * Generates a condition based on the generator's current context, either returning
 * a random condition or a condition based on PATH variables.
 *
 * @param generator The generator object used to track the current state of code generation.
 * @return A string representing the generated condition.
 */
std::string generateIfCondition(Generator& generator);

/**
 * @brief Base class for all nodes in the abstract syntax tree (AST).
 *
 * Defines the interface for generating code and printing the AST structure.
 */
class Node {
   public:
    virtual ~Node() = default;

    /**
     * @brief Generates code for this AST node.
     *
     * @param generator The generator object used to manage code generation.
     */
    virtual void gen(Generator&) = 0;

    /**
     * @brief Prints the structure of this AST node.
     *
     * @param indent The number of spaces to indent the output.
     */
    virtual void print(int indent = 0) = 0;
};

/**
 * @brief Represents a block of statements in the AST.
 *
 * Contains a statement and the following code block.
 */
class StatementCode : public Node {
   private:
    std::shared_ptr<Node> stmt;  // The statement node
    std::shared_ptr<Node> code;  // The following code block

   public:
    StatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : stmt(stmt), code(code) {
    }

    void gen(Generator&) override;

    void print(int) override;
};

/**
 * @brief Represents a lambda expression in the AST.
 *
 * Currently, this class does not generate any code.
 */
class LambdaCode : public Node {
   public:
    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents an identifier in the AST.
 *
 * Holds the name of the identifier.
 */
class Id : public Node {
   private:
    std::string id;  // The identifier's name

   public:
    Id(std::string id) : id(id) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents an insert operation in the AST.
 *
 * Generates code to insert into a variable.
 */
class Insert : public Node {
   public:
    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents a remove operation in the AST.
 *
 * Generates code to remove from a variable.
 */
class Remove : public Node {
   public:
    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents a new variable creation in the AST.
 *
 * Generates code to create a new variable.
 */
class New : public Node {
   public:
    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents a contains operation in the AST.
 *
 * Generates code to check if a variable contains a value.
 */
class Contains : public Node {
   public:
    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents a loop in the AST.
 *
 * Contains the code block to be executed in the loop.
 */
class Loop : public Node {
   private:
    std::shared_ptr<Node> code;  // The code block to be executed in the loop

   public:
    Loop(std::shared_ptr<Node> code) : code(code) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents a function call in the AST.
 *
 * Manages the function's parameters, ID, and code block.
 */
class Call : public Node {
   private:
    int id;                      // The ID of the function being called
    std::shared_ptr<Node> code;  // The code block of the function

   public:
    int conditionalCounts;  // Tracks the number of conditional statements in the call

    Call(int id, std::shared_ptr<Node> code) : id(id), code(code), conditionalCounts(0) {
    }

    Call() : conditionalCounts(0) {
    }

    /**
     * @brief Sets the ID of the function being called.
     *
     * @param id The function ID.
     */
    void setId(int id) {
        this->id = id;
    }

    /**
     * @brief Sets the code block of the function being called.
     *
     * @param code The code block.
     */
    void setCode(std::shared_ptr<Node> code) {
        this->code = code;
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents a sequence of operations in the AST.
 *
 * Contains the code block for the sequence.
 */
class Seq : public Node {
   private:
    std::shared_ptr<Node> code;  // The code block for the sequence

   public:
    Seq(std::shared_ptr<Node> code) : code(code) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents an if statement in the AST.
 *
 * Contains the parameters and the else clause for the if statement.
 */
class If : public Node {
   private:
    std::shared_ptr<Node> ifParam;  // The parameters for the if statement

   public:
    If(std::shared_ptr<Node> ifParam) : ifParam(ifParam) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents the parameters of an if statement in the AST.
 *
 * Contains the code block for the if statement and the else clause.
 */
class IfParam : public Node {
   private:
    std::shared_ptr<Node> code;   // The code block for the if statement
    std::shared_ptr<Node> else_;  // The else clause

   public:
    IfParam(std::shared_ptr<Node> code, std::shared_ptr<Node> else_) : code(code), else_(else_) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents an if statement with no parameters in the AST.
 *
 * Contains the else clause for the if statement.
 */
class NoParamIf : public Node {
   private:
    std::shared_ptr<Node> else_;  // The else clause

   public:
    NoParamIf(std::shared_ptr<Node> else_) : else_(else_) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents an else clause with a code block in the AST.
 *
 * Contains the code block for the else clause.
 */
class CodeElse : public Node {
   private:
    std::shared_ptr<Node> code;  // The code block for the else clause

   public:
    CodeElse(std::shared_ptr<Node> code) : code(code) {
    }

    void gen(Generator&) override;

    void print(int indent) override;
};

/**
 * @brief Represents an else clause with no code block in the AST.
 *
 * This class does not generate any code.
 */
class NoCodeElse : public Node {
   public:
    void gen(Generator&) override;

    void print(int indent) override;
};

#endif
