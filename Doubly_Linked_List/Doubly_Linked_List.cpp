#include <iostream>
#include "Doubly_Linked_List.h"
using namespace std;

Doubly_Linked_List::Doubly_Linked_List()
{
    head = temp = NULL;
}

void Doubly_Linked_List::push(int val){
    Node* newNode = new Node ;
    newNode->value = val;
    newNode->next = NULL;
    newNode->pre=NULL;
    if(head==NULL){
        head = temp = newNode;
    }else{
        previous = temp;
        newNode->pre= previous;
        temp->next = newNode;
        temp = newNode;
    }
}
void Doubly_Linked_List::printAllNode(){
    Node* temp = head;
    cout<<head<<endl;
    while(temp!=NULL){
        cout << temp->pre <<endl;
        cout << temp->value <<endl;
        cout << temp->next <<endl;
        cout << "____________________________"<<endl;
        temp = temp->next;
    }
}
void Doubly_Linked_List::insertFirst(int val){
    if(head ==NULL){
        push(val);
    }else{
        Node* temp = head;
        Node* newNode = new Node;
        newNode->value = val;
        newNode->next = temp;
        temp->pre = newNode;
        head =newNode;

    }
}

void Doubly_Linked_List::insertAfter(int numb ,int val){
    
}

Doubly_Linked_List::~Doubly_Linked_List()
{

}