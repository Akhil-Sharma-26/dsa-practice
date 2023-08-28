// Parenthesis problem
#include<iostream>
using namespace std;
class Stack{
    string ele[10];
    int top;
    public:
        Stack(){
           top=-1;
        }
        bool isEmpty(){
            if(top==-1)
            return true;
            else{
                return false;
            }
        
        }
        void push(char n){
            if(top>10){
                cout<<"stack overflow"<<endl;
                return;
            }
            top++;
            ele[top]=n;
        }
        string pop(){
            if(top==-1){
                cout<<"already poped"<<endl;
                // return ;
            }
            return ele[top--];
        }
        void paranthesis(string str){
            // s1.pop();
            pop();
            if(isEmpty()){
                cout<<"well paranthesis";
            }
            else{
                cout<<"not good";
            }
        }
        void display(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            for(int i = top; i >= 0; i--){
                cout<<ele[i]<<" ";
            }
            cout<<endl;
        }
        string top1(){
            return ele[top];
        }
};
int main(){
    Stack s1,s2;
    char paran[10]="({})";
    for(int i=0;i<2;i++){
        s1.push(paran[i]);
        if(s1.top1()=="("){
            if(paran[i+1]=='}'){
                s1.pop();
            }
            s1.paranthesis(s1.top1());
            cout<<"hello"<<endl;
        }
        else{
            if(paran[i+1]==')'){
                s1.pop();
            }
            s1.paranthesis(s1.top1());
            cout<<"hey";
        }
    }
    s1.display();
}