#include <iostream>
#include "StackArray.h"
using namespace std;
StackArray::StackArray(int num)
{
    top = -1;
    numb = num;
}

void StackArray::push(int val){
    // cout << numb << " " << getLen() <<endl;
    if(numb<=getLen()){
        cout << "sorry Stack Is Full" <<endl;
    }else{
        top++;
        stk[top]=val;
    }
}

void StackArray::pop(){
    top--;
}

int StackArray::peek(){
    return stk[top];
}

bool StackArray::isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

int StackArray::getLen(){
    return top+1;
}

void StackArray::printStk(){
    for (int i=top ; i >= 0;i--){
        cout << stk[i] <<endl;
    }
}
StackArray::~StackArray()
{

}