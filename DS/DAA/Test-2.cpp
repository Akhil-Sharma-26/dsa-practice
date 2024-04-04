#include<iostream>
using namespace std;
void wow(int n){
    if(n>0){
        cout<<n<<" ";
        wow(n/2);
        wow(n/2);
//        wow(n-2);
    }
}
int main(){
    wow(10);
}