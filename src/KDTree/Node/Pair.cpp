#include "Pair.h"
#include "../RecordID/Key.h"
#include <iostream>

PairKeyNode::PairKeyNode() {
    key = NULL;
    next = 0;

}

PairKeyNode::PairKeyNode(Key* _key, unsigned nextNodeNumber) {
    key = _key;
    next = nextNodeNumber;
}

Key* PairKeyNode::getKey() {
    return key;
}

unsigned PairKeyNode::getNode() {
    return next;
}

PairKeyNode::~PairKeyNode(){}

unsigned PairKeyNode::getSize() {
    return key->getSize() + 1;
}

void PairKeyNode::dump()
{
    std::cout << "(";
    if (!key) {
        std::cout << "NULL";
    } else {
        key->dump();
    }
    std::cout << ")" << next;
}
