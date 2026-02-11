#include "doublell.h"

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
    return 0;
}
