#include "nodedll.h"

NodeDLL::NodeDLL(int newValue) {
    this->value = newValue;
    this->next = nullptr;
    this->prev = nullptr;
}
