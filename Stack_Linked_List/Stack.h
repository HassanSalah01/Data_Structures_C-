#ifndef STACK_H
#define STACK_H



#pragma once

class Stack 
{
public:
    struct Node {
            int value ;
            Node* next ;
        };
    Stack();
    ~Stack();
    void push(int val);
    void printAllNode();
    void pop();
    int getLen();
    void printPeek();



private:
    Node* top ;
    Node* tail;
    
    

    

};

#endif