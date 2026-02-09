#ifndef STACKARR_H
#define STACKARR_H
#define ARRAY_SIZE 100

class StackArr
{
public:
    int stack[ARRAY_SIZE];
    int size;
    StackArr();


    // operaciones
    void push(int newValue);
    int pop();
    int peek();
    void print();
};

#endif // STACKARR_H
