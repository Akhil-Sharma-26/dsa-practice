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
int main(){
    
    return 0;     
}