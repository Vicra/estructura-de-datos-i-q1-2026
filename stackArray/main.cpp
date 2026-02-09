#include <iostream>
#include "stackarr.h"
using std::cout;

int main() {
    StackArr sar;
    sar.push(10);
    sar.push(20);
    sar.push(30);
    sar.print();
    sar.pop();
    sar.print();
    cout << "Peeking: " << sar.peek() << std::endl;
    sar.print();
    return 0;
}
