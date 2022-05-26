#include <iostream>
#include "StackArray.h"
#include "StackArray.cpp"
using namespace std;

int main()
{
    StackArray s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.pop();
    s.pop();
    cout<<s.isEmpty()<<endl;
    s.push(3);
    cout<<s.peek()<<endl;
    s.printStk();
    return 0;
}
