#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(int number)
{
    numb = number;
    front = rear = -1;
}

void Queue::enQueue(int val){
    if(front ==-1){
        front=rear=0;
        que[rear] = val;
    }else{
        rear++;
        que[rear] = val;
    }
}
void Queue::deQueue(){
    front++;
}
void Queue::print(){
    for ( int i = front ; i <= rear;i++){
        cout <<que[i]<<endl;
    }
}

Queue::~Queue()
{

}