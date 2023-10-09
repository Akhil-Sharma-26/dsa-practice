// Doubly linked list:
// Similar to singly, just add prev pointer to store the address of the previous node.
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
class Linkedlist
{
    // int data;
    node *head = NULL;

public:
    void insert_beg(int d)
    {
        // node *newnode = new node(d);
        // newnode->data;
        // head = newnode;
        node *newnode = new node(1);
        newnode->data = d;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void search(int x)
    {
        node *current = head;
        if (head == NULL)
        {
            cout << "List empty" << endl;
            return;
        }
        while (current != NULL)
        {
            if (current->data == x)
            {
                cout << "found";
            }
            current = current->next;
        }
        cout << "not found";
    }
    void display(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"----->";
            temp=temp->next;
        }
    }
    void insertatEND(int d)
    {
        // node *temp = head;
        // while (temp->next != NULL)
        // {
        //     temp = temp->next;
        // }
        // temp->next=newnode;
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
    };
    void insertaftervalue(int num,int n)
    {
        node * newnode = new node();
        newnode->data = n;
        newnode-> prev = newnode->next = NULL;
        if(head == NULL){
            head= newnode;

        }
        else{
            node * temp = head;
            while(temp->next!=NULL && temp->data != num){
                temp=temp->next;
            }
            newnode->next = temp->next;
            temp->next->prev = newnode;
            newnode->prev = temp;
            temp->next = newnode;
            
        }
    }
    // void insert_beg(int d1)
    // {
    //     node *newnode = new node(1);
    //     newnode->data = d1;
    //     if (head == NULL)
    //     {
    //         head = newnode;
    //     }
    //     else
    //     {
    //         newnode->next = head;
    //         head = newnode;
    //     }
    // }
    void testt(int d1)
    {
        node *newnode = new node(1);
        newnode->data = d1;
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
        }
        // void inss(int d1, int d2)
        // {
        //     node *temp = head;
        // }
    };
    void delFromBeg(){
        if(head==NULL){
            cout<<"empyy";
        }
        else{

        }
    }
    void delFromEnd(){
        if(head==NULL){
            //
        }
        else{
            node *temp = new node();
            while(temp->next!=NULL){
                temp=temp->next;
            }
            if(head==NULL){
                head=NULL;
            }
            else{
                temp->prev->next = NULL;
            }
            free(temp);
        }
    }
    void delSpecific(int num){
        node * newnode = new node();
        // newnode->data = n;
        // newnode-> prev = newnode->next = NULL;
        if(head == NULL){
            // head= newnode;
            cout<<"empypp";
        }
        else{
            node * temp = head;
            while(temp->next!=NULL && temp->data != num){
                temp=temp->next;
            }
            temp->prev->next = temp->next;
            // temp->next->prev = newnode;
            // newnode->prev = temp;
            // temp->next = newnode;
            // ! change the above accordingly

        }
    }
};
int main(){

}