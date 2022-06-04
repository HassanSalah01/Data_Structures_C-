#ifndef QUEUE_H
#define QUEUE_H

#pragma once

class Queue
{
public:
struct Node {
            int value ;
            Node* next ;
        };
    Queue();
    void enqueue(int val);
    void deQueue();
    int getFront();
    int getRear();
    int getLength();
    void print();
    ~Queue();

private:
    Node* temp ;
    Node* front;
    Node* rear ;
    

};

#endif