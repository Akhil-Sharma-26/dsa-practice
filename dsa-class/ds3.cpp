#include<iostream>
using namespace std;
// circular queue
// underflow: front=-1
// overflow: 
// ! rear=(maxlength - 1) && front==0
// (rear=(rear+1)%n) 
// ! front == (rear+1) % n
// if single element is present, ie Rear==front:then: front=rear=0;
// display(){
    // display from front:
    // therefore: i=front to maxlength-1 || rear to front ??????? HOW
// }
int main(){
    // deque => front++
    // enqueue => 
    // if(f==1 || r==1) => deque() => f==r==-1
//