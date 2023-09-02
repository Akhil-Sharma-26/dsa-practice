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
class Linkedlist{
    node *head=NULL;
    public:
        void insert_beg(int d){
            node * newnode= new node(d);
            newnode->data;
            head=newnode;
        }
};
int main(){
    node * one= new node(20);
    node * two= new node(24);
    node * three= new node(4);

    node * temp;
    // node *next head=NULL;
}   