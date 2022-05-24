#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#pragma once

class Doubly_Linked_List
{
public:
    struct Node {
                int value ;
                Node* next ;
                Node* pre;
            };
    Doubly_Linked_List();
    ~Doubly_Linked_List();
    void push(int val);
    void printAllNode();
    void insertFirst(int val);
    void insertAfter(int numb ,int val);
    int getLen();
    void deleteFirst();
    void deleteExactNode(int num);
    void deleteEnd();

private:
    Node* head;
    Node* temp;
    Node* previous;

};

#endif