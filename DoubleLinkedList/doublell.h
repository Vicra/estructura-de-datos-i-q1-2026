#ifndef DOUBLELL_H
#define DOUBLELL_H
#include "nodedll.h"

class DoubleLL
{
public:
    NodeDLL *head;
    NodeDLL *tail;
    DoubleLL();

    // operaciones
    void pushBack(int newValue);
    void print();
    void pushFront(int newValue);
    void deleteBack();
    void deleteFront();
};

#endif // DOUBLELL_H
