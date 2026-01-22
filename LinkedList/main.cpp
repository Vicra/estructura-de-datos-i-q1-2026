#include <iostream>
#include "node.h"

using std::cout;
using std::endl;

void printList(Node* node){
    Node* temp = node;
    while(temp != nullptr) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << " nullptr ";
}

int main(){
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    n1->next = n2;
    printList(n1);

    delete n1;
    delete n2;

    return 0;
}
