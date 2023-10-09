// cm, ch, cr,
#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node *next;
    node* prev;
        node(){
            this->data=0;
            this->next=NULL;
        }
        node(int n){
            this->data=n;
            this->next=NULL;
        }
};
class linkedlist{
    node* head = NULL;
    public:
        void insertAtEnd(int num){
            node *newnode = new node(1);
        // newnode->data = d;
        newnode->prev=newnode->next=NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev=temp;
        }

        }
        void deletionAnywhere(){
            if(head==NULL){
                cout<<"List is empty"<<endl;
            }
            else{
                node* ptr = head;
                while(ptr->next->next!=NULL){
                    ptr = ptr->next;
                }
                ptr->next = NULL;
            }
        }
};
int main(){
    
    return 0;     
}