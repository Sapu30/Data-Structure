#include<bits/stdc++.h>
using namespace std;

//creating node
class Node{
    public:
    int data;
    Node * next;
};

//insert at the beggining using pointer to pointer
void insertBeg(Node **head_ref, int item)
{ 
    Node* new_node = new Node();   //create a new node 

    new_node -> data = item;       //data in new node

    new_node -> next = (*head_ref); //link of new node now point 1st node

    (*head_ref) = new_node;          //change the head pointer pointing to new node
        
}
//insert a new node after the the given prev node
void insertAfter(Node *prev_node, int new_data)
{
    if(prev_node == NULL)
    {
       cout<<"Previous node should not be null";
       return;
    }
    Node* new_node = new Node();      //Allocate new node

    new_node -> data = new_data;      //put in the data

    new_node -> next = prev_node -> next;   //Make next of new node as next of prev_node

    prev_node -> next = new_node;          //change the next of prev_node as new_node
}
//insert at end of linked list using pointer to pointer 
void insertEnd(Node **head_ref, int new_data)
{
    Node* new_node = new Node();       //Allocate new node

    Node *last = *head_ref;            //will be used

    new_node -> data = new_data;       //put in the data

    new_node -> next = NULL;           //last node hence make next = NULL
    
    if(*head_ref == NULL)              //if list is empty make new node as head
    {
        *head_ref = new_node;
        return;
    }

    while(last -> next !=NULL)         //traverse till the last node
        last = last ->next;

    last -> next = new_node;          //change the next of last node
    return;

}

//print node
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
}  
  
//Driver Code
int main()
{
    int item; 
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    

    head = new Node();
    second = new Node();

    head -> data = 45;
    head -> next = second;

    second -> data = 98;
    second -> next = NULL;

    
    insertBeg(&head,78);
    insertAfter(head -> next, 50);
    insertEnd(&head,18);
    
    cout<<"Created Linked list is: ";  
    printList(head);  

    return 0;
}