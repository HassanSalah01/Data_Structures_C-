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


private:
    Node* head ;
    Node* temp ;
    
    


};

#endif