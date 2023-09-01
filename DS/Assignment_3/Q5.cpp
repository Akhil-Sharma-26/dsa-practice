// infix to postfix conversion
#include<iostream>
#include<stack>
using namespace std;
int prece(char ss){
    if(ss=='^'){
        return 1;
    }
    if(ss=='+'||ss=='-'){
        return 2;
    }
    if(ss=='*'||ss=='/'){
        return 3;
    }
}
int main(){
    stack <char> ss;
    stack <string> str;
    string output;
    string s="A+B+C*(D/E)";
    ss.push(')');
    for(int i=0;i<s.size();i++){
        ss.push(s[i]);
    }
    while(!ss.empty()){
        cout<<ss.top()<<endl;
        ss.pop();     
    }
    str.push("(");
    for(int i=0;i<ss.size();i++){
        if(prece(s[i])==2){
            
        }  
    }
    
}
