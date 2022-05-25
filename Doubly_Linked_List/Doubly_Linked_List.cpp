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
    Node* newNode = new Node;
    newNode->value = val;
    Node* temp = head ;
    int num = numb-1;
    while(num>0){
        temp = temp->next;
        num--;
    }
    newNode->pre = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    
}
void Doubly_Linked_List::deleteEnd(){
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;

}

void Doubly_Linked_List::deleteExactNode(int num){
    if(num==1){
        head=head->next;
        delete head->pre;
        head->pre = NULL;
    }else if(getLen()>0 && num < getLen()){
        Node* temp = head;
        int numb = num-2;
        while(numb>0){
            temp =temp->next;
            numb--;
        }
        cout<<temp<<endl;
        Node* temp2 = temp->next->next;
        temp2->pre = temp;
        delete temp->next;
        temp->next = temp2;
        }
    }


int Doubly_Linked_List::getLen(){
    Node* temp = head;
    int count = 0 ;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;

}
Doubly_Linked_List::~Doubly_Linked_List()
{

}