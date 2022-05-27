#include <iostream>
#include "StackArray.h"
using namespace std;
StackArray::StackArray(int num)
{
    top = -1;
    numb = num;
}

//push a number into The top of the stack
void StackArray::push(int val){
   
    if(numb<=getLen()){
        cout << "sorry Stack Is Full" <<endl;
    }else{
        top++;
        stk[top]=val;
    }
}

//remove a number From Top of the stack
void StackArray::pop(){
    top--;
}

//return The top element of the stack
int StackArray::peek(){
    return stk[top];
}

// return true if the stack is empty 
bool StackArray::isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

// return the length of the stack
int StackArray::getLen(){
    return top+1;
}

// print All the elements in the stack
void StackArray::printStk(){
    for (int i=top ; i >= 0;i--){
        cout << stk[i] <<endl;
    }
}
StackArray::~StackArray()
{

}