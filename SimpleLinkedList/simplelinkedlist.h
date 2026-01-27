#ifndef SIMPLELINKEDLIST_H
#define SIMPLELINKEDLIST_H
#include "node.h"
#include <string>
using std::string;

class SimpleLinkedList
{
public:
    Node* head;
    uint length;
    string name;
    SimpleLinkedList(string name);

    void incrementSize(){length++;}
    void decrementSize(){length--;}

    // inserts
    uint pushBack(uint newValue);
    uint pushFront(uint newValue);
    uint insertAt(uint newValue, int pos);
    void print();

    // removes
    bool deleteByValue(uint valueToDelete);
    bool deleteByValueV2(uint valueToDelete);
};

#endif // SIMPLELINKEDLIST_H
