#include <iostream>
#include "simplelinkedlist.h"

using std::cout;

int main()
{
    SimpleLinkedList l;
    l.pushBack(1);
    l.pushBack(2);
    l.pushBack(3);
    l.pushBack(1);

    l.print();
    l.deleteByValue(1);
    l.print();
    return 0;
}
