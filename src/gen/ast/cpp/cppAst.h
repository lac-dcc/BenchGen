#ifndef CPPAST_H
#define CPPAST_H

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
void cppprintIndentationSpaces(int indent);

/**
 * @brief Generates a condition string for an if statement.
 *
 * Generates a condition based on the generator's current context, either returning
 * a random condition or a condition based on PATH variables.
 *
 * @param generator The generator object used to track the current state of code generation.
 * @return A string representing the generated condition.
 */
std::string cppgenerateIfCondition(ProgrammingLanguageGenerator& generator);


/**
 * @brief Represents a block of statements in the AST.
 *
 * Contains a statement and the following code block.
 */
class CppStatementCode : public StatementCode {

   public:
    CppStatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : StatementCode(stmt, code) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int) override;

    ~CppStatementCode() = default;
};

/**
 * @brief Represents a lambda expression in the AST.
 *
 * Currently, this class does not generate any code.
 */
class CppLambdaCode : public LambdaCode {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppLambdaCode() = default;
};

/**
 * @brief Represents an identifier in the AST.
 *
 * Holds the name of the identifier.
 */
class CppId : public Id {

   public:
    CppId(std::string id) : Id(id) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppId() = default;
};

/**
 * @brief Represents an insert operation in the AST.
 *
 * Generates code to insert into a variable.
 */
class CppInsert : public Insert {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppInsert() = default;
};

/**
 * @brief Represents a remove operation in the AST.
 *
 * Generates code to remove from a variable.
 */
class CppRemove : public Remove {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppRemove() = default;
};

/**
 * @brief Represents a new variable creation in the AST.
 *
 * Generates code to create a new variable.
 */
class CppNew : public New {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppNew() = default;
};

/**
 * @brief Represents a contains operation in the AST.
 *
 * Generates code to check if a variable contains a value.
 */
class CppContains : public Contains {
   public:
    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppContains() = default;
};

/**
 * @brief Represents a loop in the AST.
 *
 * Contains the code block to be executed in the loop.
 */
class CppLoop : public Loop {

   public:
    CppLoop(std::shared_ptr<Node> code) : Loop(code) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppLoop() = default;
};

/**
 * @brief Represents a function call in the AST.
 *
 * Manages the function's parameters, ID, and code block.
 */
class CppCall : public Call {

   public:
   
   ~CppCall(){};


    CppCall(int id, std::shared_ptr<Node> code) : Call(id, code) {}

    CppCall() {};

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
class CppSeq : public Seq {

   public:
    CppSeq(std::shared_ptr<Node> code) : Seq(code) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

    ~CppSeq() = default;
};

/**
 * @brief Represents an if statement in the AST.
 *
 * Contains the parameters and the else clause for the if statement.
 */
class CppIf : public If {
  
   public:
    CppIf(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : If(c1, c2) {
    }

    void gen(ProgrammingLanguageGenerator&) override;

    void print(int indent) override;

     ~CppIf() = default;
};



#endif
