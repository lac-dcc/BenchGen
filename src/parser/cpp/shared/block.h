#ifndef BLOCK_H
#define BLOCK_H

#include "enums.h"
#include "typedefs.h"

class Block {
   private:
    int type;
    vector<int> structures;
    shared_ptr<Block> nextBlock;
    shared_ptr<Block> elseBlock;
    shared_ptr<Block> parentBlock;

   public:
    Block(int _type, shared_ptr<Block> _parentBlock) {
        type = _type;
        structures = {};
        nextBlock = nullptr;
        elseBlock = nullptr;
        parentBlock = _parentBlock;
    }

    int getType() {
        return type;
    }

    vector<int> getStructures() {
        return structures;
    }

    shared_ptr<Block> getNextBlock() {
        return nextBlock;
    }

    shared_ptr<Block> getElseBlock() {
        return elseBlock;
    }

    shared_ptr<Block> getParentBlock() {
        return parentBlock;
    }

    void setNextBlock(shared_ptr<Block> _nextBlock) {
        nextBlock = _nextBlock;
    }

    void setElseBlock(shared_ptr<Block> _elseBlock) {
        elseBlock = _elseBlock;
    }

    void addStructure(int _structure) {
        structures.push_back(_structure);
    }
};

#endif