#include <iostream>
#include "Linked_List.h"
using namespace std;

Linked_List::Linked_List(){
    head = temp = NULL;

}
void Linked_List::push(int val){
    Node* newNode = new Node;
    newNode->value = val;
    newNode->next = NULL;
    if(head==NULL){
        head = temp = newNode;
    }else{
        temp->next = newNode;
        temp = newNode;
    }
}
void Linked_List::printAllNode(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->value <<endl;
        temp = temp->next;
    }
}

Linked_List::~Linked_List()
{

}