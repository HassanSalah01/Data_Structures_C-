#include "Linked_List.h"
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
    }else{
        newNode->next=top;
        top=newNode;
    }
}
Stack::~Stack()
{

}
