#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
}
int main(){
    queue<int>q;
    
}
// by default, dequeue function returns something.
// for overflow: FRONT==(REAR+1)%MAX
// for underflow: FRONT==-1