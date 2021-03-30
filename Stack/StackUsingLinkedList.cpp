#include<bits/stdc++.h>
using namespace std;

//A structure to represent stack; creating Node
class Node{
    public:
    int data;
    Node * next;
};

Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> next = NULL;
    return new_node;
}

//If stack is empty
int isEmpty(Node* head)
{
    return !head;
}

//Code to push elements in stack
void push(Node** head, int data)
{
    Node* new_node = newNode(data);
    new_node -> next = *head;
    *head = new_node;
    cout<<data<<" pushed to stack \n";
}
//Code to delete elements from stack
int pop(Node** head)
{
    if(isEmpty(*head))
       return INT_MIN;
    Node* temp = *head;
    *head = (*head) -> next;
    int popped = temp -> data;
    free(temp);
    return popped;
}

//Print top element
int peek(Node* head)
{
    if(isEmpty(head))
       return INT_MIN;
    return head -> data;
}

//Driver Code
int main()
{
    Node* head = NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    //Stack become 30, 20, 10

    cout<<pop(&head)<<" popped from stack: \n";  //top element get deleted
    //Stack become 20, 10
    
    cout<<"Elements present in stack : ";
    while(!isEmpty(head))
    {
        cout<<peek(head)<<" ";
        pop(&head);
    }   

    return 0;
}