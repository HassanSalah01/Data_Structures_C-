#include <iostream>
#include "Doubly_Linked_List.h"
#include "Doubly_Linked_List.cpp"

using namespace std;

int main(){

   Doubly_Linked_List d1;
   d1.push(1);
   d1.push(2);
   d1.push(3);
   d1.push(4);
   d1.push(5);
   d1.push(6);
   d1.deleteFirst();
   d1.printAllNode();
   


    return 0;
}