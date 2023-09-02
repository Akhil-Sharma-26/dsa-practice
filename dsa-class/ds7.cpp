// Linked List
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next; // for the address
};

int main()
{
    struct Node *one = (struct Node *)malloc(sizeof(struct Node ));
    struct Node *two = (struct Node *)malloc(sizeof(struct Node ));
    struct Node *three = (struct Node *)malloc(sizeof(struct Node ));
    int num = 789;
    one->data = 10;
    two->data = 20;
    three->data = 42;

    one->next = two;
    two->next = three;
    three->next = NULL;

    struct Node *temp;
    temp = one;
    // while (temp != NULL)
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"----->";
        temp=temp->next;
    }
    free(one);
    free(two);
    free(three);
    return 0;
}
// Linear DS
//