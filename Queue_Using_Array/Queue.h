#ifndef QUEUE_H
#define QUEUE_H

#pragma once

class Queue
{
public:
    Queue(int number);
    void enQueue(int val);
    void deQueue();
    void print();
    ~Queue();

private:
    int front ;
    int rear;
    int numb ;
    int *que{ new int[numb]};

};

#endif