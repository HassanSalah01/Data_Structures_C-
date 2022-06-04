#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
    temp  = rear = front = NULL;

}

void Queue::enqueue(int val){
    Node* newNode = new Node;
    newNode->value = val;
    newNode->next = NULL;
    if(front==NULL){
        front = rear= temp =newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}
void Queue::print(){
    Node* temp = front;
    while(temp!=NULL){
        cout << temp->value <<endl;
        temp = temp->next;
    }
}

Queue::~Queue()
{

}