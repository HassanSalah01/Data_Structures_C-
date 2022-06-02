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
    cout << q1.getFront() <<endl;
    cout << q1.getRear() <<endl;
    cout << q1.getLength() <<endl;
    





    return 0;
}
