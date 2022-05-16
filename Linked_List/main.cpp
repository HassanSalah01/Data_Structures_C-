#include <iostream>
#include "Linked_List.h"
#include "Linked_list.cpp"
using namespace std;

int main(){

    Linked_List l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.printAllNode();
    return 0;
}