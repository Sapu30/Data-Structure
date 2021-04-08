#include<bits/stdc++.h>
using namespace std;

//creating node
class Node{
public:
    int data;
    Node* next;
};

//Insert node in the list
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}
//function to dlt node 
void dltNode(Node** head_ref, int key)
{
   Node* temp = *head_ref;
   Node* prev = NULL;

   if(temp != NULL && temp -> data == key)
   {
       *head_ref = temp -> next;
        delete temp;
        return;
   }
   else{
       while(temp != NULL && temp -> data != key)
       {
           prev = temp;
           temp = temp -> next;
       }
       if(temp == NULL)
        return;

    prev -> next = temp -> next;
    delete temp;
   }

}

//print list
void printList(Node* node)
{
    while(node != NULL)
    {
        cout<<node -> data<<" ";
        node = node -> next;
    }
}

//Driver code
int main()
{
    Node* head = NULL;
    
    push(&head, 2);
    push(&head, 3);
    push(&head, 1);
    push(&head, 7);

    cout<<"Created Linked List : ";
    printList(head);

    dltNode(&head,1);
    cout<<"\nLinked List after Deletion of 1: ";

    printList(head);

    dltNode(&head,3);
    cout<<"\nLinked List after Deletion of 3: ";

    printList(head);

    return 0;

}