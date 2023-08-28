#include<iostream>
using namespace std;
class Stack{
    int sample[10];
    int top;
    public:
    Stack(){
        top = -1;
    }
    bool isEmpty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else{
            cout<<"Stack is not empty"<<endl;
            return false;
        }
    }
    void push(int element){
        if(top>=9){
            cout<<"Stack is full"<<endl;
        }
        else{
            top++;
            sample[top]=element;
        }
    }
};