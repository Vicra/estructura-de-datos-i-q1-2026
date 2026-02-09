#include "stackarr.h"
#include <iostream>
using std::cout;
using std::endl;

StackArr::StackArr() {
    this->size = 0;
}

void StackArr::push(int newValue){
    this->stack[this->size++] = newValue;
    // this->size++; syntax sugar upstairs
}

int StackArr::pop(){
    return this->stack[--this->size];
}

void StackArr::print(){
    for (int i = 0; i < this->size; ++i) {
        cout << this->stack[i] << " ";
    }
    cout << endl;
}

int StackArr::peek(){
    return this->stack[this->size - 1];
}
