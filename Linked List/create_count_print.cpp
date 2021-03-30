#include<bits/stdc++.h>
using namespace std;

//Creating Node in a linked list
class Node{
public:
    int data;     //data
    Node* next;   //link for next node
};

//traverse & print elements of linked list [o(n)]
void traverse(Node* n)
{
    cout<<"\nElements are : ";
    while(n != NULL)
    {
      cout<<n->data <<" ";
      n = n->next;
    }
}

//count no. of elements present in the linkedlist [o(n)]
void cnt(Node* head)
{
    int count = 0;
    Node *ptr = NULL;     //ptr to store value temperory each time & count 
    ptr = head;
    if(head == NULL)
    {
      cout<<"List is empty.";
    }
    else
    {
      while(ptr != NULL)    
      {
        count++;
        ptr = ptr->next;
      }
      cout<<"No of elements : "<<count;
    }
    
}

//Driver code
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    

    head = new Node();
    second = new Node();
    third = new Node();
    

    head -> data = 45;
    head -> next = second;

    second -> data = 98;
    second -> next = third;

    third -> data = 33;
    third -> next = NULL;

    cnt(head);
    if(head != NULL)
    {
      traverse(head);
    }

    return 0;
}