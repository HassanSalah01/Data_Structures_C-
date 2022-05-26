#ifndef STACKARRAY_H
#define STACKARRAY_H

#pragma once

class StackArray
{
public:
    StackArray(int num);
    void push(int val);
    void printStk();
    void pop();
    int getLen();
    int peek();
    bool isEmpty();
    ~StackArray();

private:
    int top;
    int size;
    int numb;
    int *stk{ new int[numb]};
};

#endif