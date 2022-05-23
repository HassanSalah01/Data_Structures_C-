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
    l1.printAllNode();
    l1.deleteEnd();
    l1.deleteEnd();
    l1.printAllNode();
    

    
   
    // int s = l1.linkedListLength();
    // cout << s << endl;
    return 0;
}