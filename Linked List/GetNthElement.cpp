#include<bits/stdc++.h>
using namespace std;

//creating node
class Node{
public:
   int data;
   Node* next;
};

//push nodes in the list
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

//Function to get Nth element (with given index)
int GetNth(Node* head, int index)
{
    Node* current = head;

    int count = 0;
    while(current != NULL)
    {
        if(count == index)
          return(current -> data);
        count++;
        current = current -> next;
    }
    assert(0); //if we try to get element of a node which is not exist

}

//Driver code
int main()
{
    Node* head = NULL;

    push(&head,1);
    push(&head,4);
    push(&head,1);
    push(&head,12);
    push(&head,1);

    cout<<"Element at index 1 is "<<GetNth(head,7);
    return 0;
}
