#include "simplelinkedlist.h"
#include <iostream>
using std::cout;
using std::endl;

SimpleLinkedList::SimpleLinkedList(string name) {
    this->head = nullptr;
    this->length = 0;
    this->name = name;
}

uint SimpleLinkedList::pushBack(uint newValue){
    if(this->head == nullptr){
        this->head = new Node(newValue);
        incrementSize();
        return newValue;
    }

    Node * temp = this->head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    // here we are at the last element
    temp->next = new Node(newValue);
    incrementSize();
    return newValue;
}

void SimpleLinkedList::print(){
    cout << "List Name: "<< this->name << endl;
    cout << "List Length: "<< this->length << endl;
    if(this->head == nullptr){
        cout << "Empty list" << endl;
        return;
    }

    Node* temp = this->head;
    while(temp != nullptr){
        cout << temp->value << " -> " ;

        // iterate
        temp = temp->next;
    }

    cout << "nullptr" << endl << endl;
}


bool SimpleLinkedList::deleteByValue(uint valueToDelete){
    bool hasBeenDeleted = false;
    if(this->head == nullptr) return false;

    if(this->head->value == valueToDelete){
        Node* tmpToDelete = this->head;
        this->head = tmpToDelete->next;
        delete tmpToDelete;
        hasBeenDeleted = true;
    }
    {
        Node* it = this->head;
        while( it->next != nullptr &&
            it->next->value != valueToDelete){
            it = it->next;
        }
        // estoy en el anterior para borrar
        Node* tmpToDelete = it->next;
        it->next = tmpToDelete->next;
        delete tmpToDelete;
        hasBeenDeleted = true;
    }
    return hasBeenDeleted;
}

bool SimpleLinkedList::deleteByValueV2(uint valueToDelete){
    if(this->head == nullptr) return false;

    bool hasBeenDeleted = false;
    while(this->head != nullptr
        && this->head->value == valueToDelete) {

        // temporal para borrar
        Node* tmpToDelete = this->head;
        // reasignar la cabeza
        this->head = this->head->next;
        // borrar la referencia
        delete tmpToDelete;
        decrementSize();
        hasBeenDeleted = true;
    }

    Node* it = this->head;
    while(it->next != nullptr){
        if(it->next->value == valueToDelete){
            Node*tmpToDelete = it->next;
            it->next = tmpToDelete->next;
            delete tmpToDelete;
            hasBeenDeleted = true;
            decrementSize();
        }
        else {
            it = it->next;
        }
    }

    return hasBeenDeleted;
}

uint SimpleLinkedList::pushFront(uint newValue){
    Node* newNode = new Node(newValue);
    newNode->next = this->head;
    this->head = newNode;
    incrementSize();
    return newValue;
}

uint SimpleLinkedList::insertAt(uint newValue, int pos){
    // validaciones
    // 1. posiciones
    if(pos < 0 || pos > this->length + 1){
        throw 400;
    }
    return 1;
    // actual code
}
