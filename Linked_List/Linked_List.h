#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#pragma once

class Linked_List
{
public:
    struct Node {
            int value ;
            Node* next ;
        };
    Linked_List();
    ~Linked_List();
    void push(int val);
    void printAllNode();
    void insertFirst(int val);
    void insertAfter(int numb ,int val);
    int getLen();
    void deleteFirst();
    void deleteAfter();
    void deleteEnd();


private:
    Node* head ;
    Node* temp ;
    
    


};

#endif