#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node *next;
        node(){
            this->data=0;
            this->next=NULL;
        }
        node(int n){
            this->data=n;
            this->next=NULL;
        }
};
void insertAtPos(int pos){
    node *temp =NULL;
    for(int i=0;i<=pos-1;i++){
        temp=temp->next;
    }
}

// Question--> insert in a sorted array.
while(temp!=NULL){
    
}