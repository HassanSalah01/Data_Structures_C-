#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

int main(){


    Stack s1;
    s1.push(5);
    s1.push(4);
    s1.printAllNode();
    cout << s1.getLen() <<endl;

    return 0;
}


    // Linked_List l1;

    // // push into The list 
    // l1.push(1);
    // l1.push(2);
    // l1.push(3);
    // l1.push(4);
    // l1.push(5);
    // l1.push(6);
    // l1.printAllNode();
    // l1.deleteExactNode(3);
    // l1.deleteExactNode(4);
    // l1.printAllNode();
    

    
   
    // int s = l1.linkedListLength();
    // cout << s << endl;