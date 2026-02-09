#include "stack.h"
#include <limits>
#include <iostream>

using std::cout;
using std::endl;

Stack::Stack() {
    this->top = nullptr;
}

void Stack::push(int value){
    StackNode* newNode = new StackNode(value);
    cout << "Pushed: " << value << endl;
    if(this->top == nullptr){
        this->top = newNode;
        return;
    }

    newNode->next = this->top;
    this->top = newNode;
    return;
}

int Stack::pop(){
    if(this->top == nullptr)
        return std::numeric_limits<int>::min();
    int valueToReturn = this->top->value;

    // guardar en temp el que voy a borrar
    StackNode* tmpToDelete = this->top;

    // reasignar la cabeza
    this->top = this->top->next;

    // limpiar la memoria
    delete tmpToDelete;

    // retorna el valor popeado
    cout << "Popped: " << valueToReturn << endl;
    return valueToReturn;
}

int Stack::peek(){
    if(this->top == nullptr)
        return std::numeric_limits<int>::min();
    cout << "Peek: " << this->top->value << endl;
    return this->top->value;
}

void Stack::print(){
    StackNode* it = this->top;
    cout << "Top -> ";
    while(it != nullptr){
        cout << it->value << " -> ";
        it = it->next;
    }
    cout  << "nullptr" << endl;
}
