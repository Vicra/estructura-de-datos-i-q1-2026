#ifndef SIMPLELINKEDLIST_H
#define SIMPLELINKEDLIST_H
#include "node.h"

class SimpleLinkedList
{
public:
    Node* head;
    SimpleLinkedList();

    uint pushBack(uint newValue);
    void print();
    bool deleteByValue(uint valueToDelete);
};

#endif // SIMPLELINKEDLIST_H
