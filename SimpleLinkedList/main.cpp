#include <iostream>
#include "simplelinkedlist.h"

using std::cout;

int main()
{
    SimpleLinkedList l("Jujutsu");
    l.pushBack(1);
    l.pushBack(2);
    l.pushBack(3);
    l.pushBack(1);
    l.pushBack(4);
    l.pushBack(5);

    l.print();
    l.deleteByValueV2(1);
    l.print();
    try {
        l.insertAt(4, -1);
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (int errorCode) {
        if(errorCode == 400){
            std::cerr << "Error: " << "Bad request" << std::endl;
        }
    }
    return 0;
}
