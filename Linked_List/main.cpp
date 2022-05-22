#include <iostream>
#include "Linked_List.h"
#include "Linked_list.cpp"
using namespace std;

int main(){

    Linked_List l1;

    // push into The list 
    l1.push(1);
    l1.push(2);
    l1.push(3);

    // push into First Node
    l1.insertFirst(0);
    l1.insertFirst(-1);
    // l1.insertAfter(3,10);
    // print All nodes 
      l1.insertAfter(3,10);
    l1.printAllNode();
   
    // int s = l1.linkedListLength();
    // cout << s << endl;
    return 0;
}