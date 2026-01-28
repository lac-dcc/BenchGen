#ifndef AST_H
#define AST_H

#include <cmath>
#include <format>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class Node;
class Statement;
class Lambda;
class Id;
class New;
class Insert;
class Remove;
class Contains;
class Loop;
class Call;
class Seq;
class If;

class Visitor {
public:
   virtual void visit(const Statement&) = 0;
   virtual void visit(const Lambda&) = 0;
   virtual void visit(const Id&) = 0 ;
   virtual void visit(const New&) = 0;
   virtual void visit(const Insert&) = 0;
   virtual void visit(const Remove&) = 0;
   virtual void visit(const Contains&) = 0;
   virtual void visit(const Loop&) = 0;
   virtual void visit(const Call&) = 0;
   virtual void visit(const Seq&) = 0;
   virtual void visit(const If&) = 0;
};

/**
 * @brief Base class for all nodes in the abstract syntax tree (AST).
 *
 * Defines the interface for generating code and printing the AST structure.
 */
class Node {
public:
   virtual ~Node() = default;
   virtual void accept(Visitor& v) const = 0;
};

/**
 * @brief Represents a block of statements in the AST.
 *
 * Contains a statement and the following code block.
 */
class Statement : public Node {
public:
   std::shared_ptr<Node> stmt;  // The statement node
   std::shared_ptr<Node> code;  // The following code block

   Statement(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : stmt(stmt), code(code) {
   }

   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a lambda expression in the AST.
 */
class Lambda : public Node {
   public:
    void accept(Visitor& v) const override;
};

/**
 * @brief Represents an identifier in the AST.
 */
class Id : public Node {
public:
   std::string id;  // The identifier's name

   Id(std::string id) : id(id) { }
   void accept(Visitor& v) const override;
};

/**
 * @brief Represents an insert operation in the AST.
 */
class Insert : public Node {
public:
   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a remove operation in the AST.
 */
class Remove : public Node {
public:
   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a new variable creation in the AST.
 */
class New : public Node {
public:
   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a contains operation in the AST.
 */
class Contains : public Node {
public:
   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a loop in the AST.
 *
 * Contains the code block to be executed in the loop.
 */
class Loop : public Node {
public:
   std::shared_ptr<Node> code;  // The code block to be executed in the loop

   Loop(std::shared_ptr<Node> code) : code(code) { }
   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a function call in the AST.
 *
 * Manages the function's parameters, ID, and code block.
 */
class Call : public Node {
public:
    int id;                      // The ID of the function being called
    std::shared_ptr<Node> code;  // The code block of the function

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

   void accept(Visitor& v) const override;
};

/**
 * @brief Represents a sequence of operations in the AST.
 *
 * Contains the code block for the sequence.
 */
class Seq : public Node {
public:
    std::shared_ptr<Node> code; // The code block for the sequence

    Seq(std::shared_ptr<Node> code) : code(code) { }
   
    void accept(Visitor& v) const override;
};

/**
 * @brief Represents an if statement in the AST.
 *
 * Contains the parameters and the else clause for the if statement.
 */
class If : public Node {
public:
    std::shared_ptr<Node> c1;
    std::shared_ptr<Node> c2;

    If(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : c1(c1), c2(c2) {
    }

    void accept(Visitor& v) const override;
};

#endif
