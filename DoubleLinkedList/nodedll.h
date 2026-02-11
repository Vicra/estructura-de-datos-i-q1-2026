#ifndef NODEDLL_H
#define NODEDLL_H

class NodeDLL
{
public:
    int value;
    NodeDLL *next;
    NodeDLL *prev;
    NodeDLL(int newValue);
};

#endif // NODEDLL_H
