#include "Linked_List.h"
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
    void insertFirst(int val);
    void insertAfter(int numb ,int val);
    int getLen();
    void deleteFirst();
    void deleteExactNode(int num);
    void deleteEnd();


private:
    Node* top ;
    Node* tail;
    
    

    

};

#endif