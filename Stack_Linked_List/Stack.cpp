#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    top = tail = NULL;
}
void Stack::push(int val){
    Node* newNode = new Node;
    newNode->value = val;
    if(top==NULL){
        top = tail = newNode;
        newNode->next = NULL;
    }else{
        newNode->next=top;
        top=newNode;
    }
}
void Stack::pop(){
    Node* temp = top;
    top = top->next;
    delete temp;
}

void Stack::printPeek(){
    cout << top->value <<endl;
}
void Stack::printAllNode(){
    Node* temp = top;
    while(temp!=NULL){
        cout << temp->value <<endl;
        temp = temp->next;
    }
}
int Stack::getLen(){
    Node* temp = top ;
    int count = 0 ;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}



Stack::~Stack()
{

}
