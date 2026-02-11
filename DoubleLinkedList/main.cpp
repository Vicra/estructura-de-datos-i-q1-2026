#include<iostream>
#include "doublell.h"

using std::cout;
using std::endl;

int main(){
    DoubleLL dll;
    dll.pushBack(1);
    dll.pushBack(2);
    dll.pushBack(3);
    dll.print();
    dll.pushFront(-1);
    dll.pushFront(-2);
    dll.pushFront(-3);
    dll.print();
    dll.deleteBack();
    dll.print();
    int index = dll.searchFromTail(-5);
    if(index > 0)
        cout << "Found at index:" << index;
    cout << "Not found";
    return 0;
}
