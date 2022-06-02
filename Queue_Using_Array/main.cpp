#include <iostream>
#include "Queue.h"
#include "Queue.cpp"
using namespace std;



int main(int argc, char const *argv[])
{
    Queue q1(5) ;
    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(3);
    q1.enQueue(4);
    q1.print();
    q1.deQueue();
    q1.print();
    





    return 0;
}
