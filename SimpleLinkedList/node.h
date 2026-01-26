#ifndef NODE_H
#define NODE_H
typedef unsigned int            uint;
// #define uint unsigned int
class Node
{
public:
    uint value;
    Node* next;
    Node(uint value);
};

#endif // NODE_H
