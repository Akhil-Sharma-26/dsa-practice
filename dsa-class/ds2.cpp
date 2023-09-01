// Queue
// FIFO
#include<iostream>
#include<queue>
#define MAX 5
using namespace std;
int rear=-1;
int front=-1;
int arr[MAX];
void enqueue(int n){
    if(rear==MAX-1){
        cout<<"overflow";   
    
    }
    if(front==-1){
        front++;
        rear++;
    }
    else{
        rear++;
    }
    arr[rear]=n;
    cout<<"front: "<<front;
    cout<<endl<<"rear: "<<rear<<endl;
}   
void dequeue(){

}
int size(){
    return rear-front+1;
}
void isful(){
    // if(front-)
}
int main(){
    enqueue(5);
    enqueue(67);
    enqueue(7);
    enqueue(78);
    enqueue(12);
    for(int i=0;i<MAX;i++){
        cout<<arr[i]<<" ";
    }
}