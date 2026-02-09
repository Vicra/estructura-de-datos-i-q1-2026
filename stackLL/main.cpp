#include "stack.h"

int main(){
    Stack s;
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.pop();
    s.print();
    s.peek();
    s.print();

    return 0;
}
