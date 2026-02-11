#include "doublell.h"
#include <iostream>
using std::cout;
using std::endl;

DoubleLL::DoubleLL() {
    this->head = nullptr;
    this->tail = nullptr;
}

void DoubleLL::pushBack(int newValue){
    NodeDLL* newNode = new NodeDLL(newValue);
    if(this->head == nullptr){
        /* syntax sugar to double assign
         *
         * head = null
         * tail = null
         *
         */
        this->head = this->tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return;
}

void DoubleLL::pushFront(int newValue){
    NodeDLL* newNode = new NodeDLL(newValue);
    if(this->head == nullptr){
        this->head = this->tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
    return;
}

void DoubleLL::print() {
    NodeDLL *it = this->head;
    cout << "Head ->";
    while(it!=nullptr){
        if(it->next == nullptr){
            cout << "(tail)[" << it->value  << "] -> nullptr";
        }
        else {
            cout << "[" <<it->value << "]<=>";
        }
        it = it->next;
    }
    cout << endl;
    return;
}

void DoubleLL::deleteBack(){
    // no hay elementos en la lista
    if(this->head == nullptr) return;
    // hay un elemento en la lista
    if(this->head->next == nullptr){
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return;
    }
    // hay mas de un elemento en la lista
    NodeDLL* prev = this->tail->prev;
    NodeDLL* tmpToDelete = this->tail;
    prev->next = nullptr;
    delete tmpToDelete;
    this->tail = prev;
    return;
}

int DoubleLL::searchFromTail(int value){
    NodeDLL *it = this->tail;
    int index = 0;
    while(it!=nullptr){
        if(it->value == value){
            return index;
        }
        it = it->prev;
        index ++;
    }
    return -1;
}

void DoubleLL::deleteFront(){}
