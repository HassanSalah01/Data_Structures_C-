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
void Linked_List::insertFirst(int val){
    if(head ==NULL){
        push(val);
    }else{
        Node* temp = head ;
        Node* newNode = new Node;
        newNode->value =val;
        newNode->next = head;
        head = newNode;
    }
}

void Linked_List::insertAfter(int numb , int val){
    if(linkedListLength()>0 && linkedListLength() >= numb){
        Node* temp = head ;
        Node* newNode  = new Node;
        newNode->value = val ;
        int s = numb;
        while(s-1>0){
            temp = temp->next;
            s--;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }


}


void Linked_List::printAllNode(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->value <<endl;
        temp = temp->next;
    }
}
int Linked_List::linkedListLength(){
    Node* temp = head ;
    int len = 0 ;
    while(temp!=NULL){
        len++;
        temp= temp->next;
    }
    return len;
}

Linked_List::~Linked_List()
{

}