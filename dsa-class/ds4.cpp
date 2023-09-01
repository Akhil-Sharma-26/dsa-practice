// circular queue
#include<iostream>
using namespace std;
class Queue{
    public:
        Queue(){
            int f=-1;
            int r=-1;
        }
        bool isFull(){
            if(r+1==f){
                return true;
            }
            if(f==0 && r==maxlen-1){
                return true;
            }
            return false;
        }
        bool isEmpty(){
            if(f==-1 && r==-1)
            return ture;
            else{
                return false;
            }
        }
        void enqueue(){
            if(isFull()){
                cout<<"queue is full\n";
            }
            else{
                if(front==-1 && rear==-1){
                    f=0;
                    r=0;
                    items[r]=element;
                }

                else{
                r=(r+1)% MAXLEN;
                }
            }

        }
        void dequeue(){
            if(isEmpty()){
                cout<<"Empty";
            }
            else{
                // if(f==0 && r==0)
                if(f==r){
                    f=-1;
                    r=-1;
                }
                else{
                    front=(front+1)%maxlen;
                }
            }
        }
        void display(){
            int i;
            if(isEmpty()){
                cout<<"quee if empty";
            }
            for(int i=front;i<=rear;i=(i+1)%maxlen){ // ! condition for i to print all elements
                cout << items[i] << " ";
            }
            cout<<items[i];
            
            
        }
        void size(){
            if(r>=f)
            int s=r-f+1;
            else{
                int s=MAXLEN-(f-r)+1;
            }
            cout<<"Size is: "<<s;
        }
};