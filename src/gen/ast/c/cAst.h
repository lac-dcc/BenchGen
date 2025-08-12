#ifndef CAST_H
#define CAST_H

#include <cmath>

#include "../../generator/languageGenerator.h"
#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../languageAst.h"

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
std::string generateIfCondition(ProgrammingLanguageGenerator& generator);


/**
 * @brief Represents a block of statements in the AST.
 *
 * Contains a statement and the following code block.
 */
class CStatementCode : public StatementCode {

   public:
    CStatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : StatementCode(stmt, code) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int) override;

    ~CStatementCode() = default;
};

/**
 * @brief Represents a lambda expression in the AST.
 *
 * Currently, this class does not generate any code.
 */
class CLambdaCode : public LambdaCode {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CLambdaCode() = default;
};

/**
 * @brief Represents an identifier in the AST.
 *
 * Holds the name of the identifier.
 */
class CId : public Id {

   public:
    CId(std::string id) : Id(id) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CId() = default;
};

/**
 * @brief Represents an insert operation in the AST.
 *
 * Generates code to insert into a variable.
 */
class CInsert : public Insert {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CInsert() = default;
};

/**
 * @brief Represents a remove operation in the AST.
 *
 * Generates code to remove from a variable.
 */
class CRemove : public Remove {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CRemove() = default;
};

/**
 * @brief Represents a new variable creation in the AST.
 *
 * Generates code to create a new variable.
 */
class CNew : public New {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CNew() = default;
};

/**
 * @brief Represents a contains operation in the AST.
 *
 * Generates code to check if a variable contains a value.
 */
class CContains : public Contains {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CContains() = default;
};

/**
 * @brief Represents a loop in the AST.
 *
 * Contains the code block to be executed in the loop.
 */
class CLoop : public Loop {

   public:
    CLoop(std::shared_ptr<Node> code) : Loop(code) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CLoop() = default;
};

/**
 * @brief Represents a function call in the AST.
 *
 * Manages the function's parameters, ID, and code block.
 */
class CCall : public Call {

   public:
   
   ~CCall(){};


    CCall(int id, std::shared_ptr<Node> code) : Call(id, code) {}

    CCall() {};

    /**
     * @brief Sets the ID of the function being called.
     *
     * @param id The function ID.
     */
    void setId(int id) override {
      this->id = id;
    };

    /**
     * @brief Sets the code block of the function being called.
     *
     * @param code The code block.
     */
    void setCode(std::shared_ptr<Node> code) override {
      this->code = code;
    };

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;


};

/**
 * @brief Represents a sequence of operations in the AST.
 *
 * Contains the code block for the sequence.
 */
class CSeq : public Seq {

   public:
    CSeq(std::shared_ptr<Node> code) : Seq(code) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CSeq() = default;
};

/**
 * @brief Represents an if statement in the AST.
 *
 * Contains the parameters and the else clause for the if statement.
 */
class CIf : public If {
  
   public:
    CIf(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : If(c1, c2) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

     ~CIf() = default;
};



#endif
