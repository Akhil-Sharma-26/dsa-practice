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
        void seatch(int x){
            node* current=head;
            if(head==NULL){
                cout<<"List empty"<<endl;
                return;
            }
            while(current!=NULL){
                if(current->data==x){
                    cout<<"found";
                }
                current=current->next;
            }
            cout<<"not found";
        }
        void display();
        void insertatEND(){
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            // temp->next=newnode;

        };
        void insertaftervalue(int num){

        }
};
int main(){
    node * one= new node(20);
    node * two= new node(24);
    node * three= new node(4);

    node * temp;
    // node *next head=NULL;
}   
// newNode-> next = temp-> next
// pahle vo chalao jo 