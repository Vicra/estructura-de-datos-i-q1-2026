#include "simplelinkedlist.h"
#include <iostream>
using std::cout;
using std::endl;

SimpleLinkedList::SimpleLinkedList() {
    this->head = nullptr;
}

uint SimpleLinkedList::pushBack(uint newValue){
    if(this->head == nullptr){
        this->head = new Node(newValue);
        return newValue;
    }

    Node * temp = this->head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    // here we are at the last element
    temp->next = new Node(newValue);

    return newValue;
}

void SimpleLinkedList::print(){
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

    cout << "nullptr" << endl;
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
        hasBeenDeleted = true;
    }

    Node* it = this->head;
    while(it->next != nullptr){
        if(it->next->value == valueToDelete){
            Node*tmpToDelete = it->next;
            it->next = tmpToDelete->next;
            delete tmpToDelete;
            hasBeenDeleted = true;
        }
        else {
            it = it->next;
        }
    }

    return hasBeenDeleted;

}
