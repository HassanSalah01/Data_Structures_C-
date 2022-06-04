#include <iostream>
#include "Queue.h"
#include "Queue.cpp"

using namespace std;



int main(int argc, char const *argv[])
{
    Queue q1 ;
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.print();

    return 0;
}
