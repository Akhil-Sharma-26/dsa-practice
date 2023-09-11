// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node()
//     {
//         this->data = 0;
//         this->next = NULL;
//     }
//     node(int n)
//     {
//         this->data = n;
//         this->next = NULL;
//     }
// };
// class Linkedlist
// {
//     node *head = NULL;

// public:
//     void insert_beg(int d)
//     {
//         node *newnode = new node(d);
//         newnode->data;
//         head = newnode;
//     }
//     void seatch(int x)
//     {
//         node *current = head;
//         if (head == NULL)
//         {
//             cout << "List empty" << endl;
//             return;
//         }
//         while (current != NULL)
//         {
//             if (current->data == x)
//             {
//                 cout << "found";
//             }
//             current = current->next;
//         }
//         cout << "not found";
//     }
//     void display();
//     void insertatEND()
//     {
//         node *temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         // temp->next=newnode;
//     };
//     void insertaftervalue(int num)
//     {
//     }
//     void insert_beg(int d1)
//     {
//         node *newnode = new node(1);
//         newnode->data = d1;
//         if (head == NULL)
//         {
//             head = newnode;
//         }
//         else
//         {
//             newnode->next = head;
//             head = newnode;
//         }
//     }
//     void testt(int d1)
//     {
//         node *newnode = new node(1);
//         newnode->data = d1;
//         if (head == NULL)
//         {
//             head = newnode;
//         }
//         else
//         {
//             node *temp = head;
//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = newnode;
//         }
//         void inss(int d1, int d2)
//         {
//             node *temp = head;
//         }
//     };
// };
// int main()
// {
//     node *one = new node(20);
//     node *two = new node(24);
//     node *three = new node(4);

//     node *temp;
    // node *next head=NULL;
// }
// newNode-> next = temp-> next
// pahle vo chalao jo

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }
    node(int n)
    {
        this->data = n;
        this->next = NULL;
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
        newnode->data = d;
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
    };
    void insertaftervalue(int num)
    {
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
};
int main()
{
    node *one = new node(20);
    node *two = new node(24);
    node *three = new node(4);

    node *temp;
    // node.
    Linkedlist hello;
    hello.insert_beg(423);
    hello.insert_beg(56);
    hello.insertatEND(5);
    hello.display();
    
    // node *next head=NULL;
}
// newNode-> next = temp-> next
// pahle vo chalao jo