#include<iostream>
using namespace std;
class stack{
    int elements[100];
    int top;
    public:
        stack(){
            top = -1;
        }
        void push(int element){
            if(top == 99){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            elements[++top] = element;
        }
        int pop(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return elements[top--];
        }
        int peek(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return elements[top];
        }
        bool isEmpty(){
            return top == -1;
        }
        void display(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            for(int i = top; i >= 0; i--){
                cout<<elements[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    stack s;
    int choice, element;
    do{
        cout<<endl<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Is Empty"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>element;
                s.push(element);
                break;
            case 2:
                cout<<"Popped element: "<<s.pop()<<endl;
                break;
            case 3:
                cout<<"Top element: "<<s.peek()<<endl;
                break;
            case 4:
                cout<<"Is empty: "<<s.isEmpty()<<endl;
                break;
            case 5:
                s.display();
                break;
            case 6:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice != 6);
    return 0;
}