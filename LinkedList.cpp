#include<bits/stdc++.h>
using namespace std;

//Representation of node
struct node{
    int data;
    struct node *next;
};

//Insertion of node 
void insert(node** root, int item )
{
    struct node *temp = new node;
    temp->data = item;
    temp->next = *root;
    *root = temp;
}

void display(node* root)
{
    while(root != NULL)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
}

node *arrayToList(int arr[], int n)
{
    node *root =NULL;
    for(int i=n-1; i>=0; i--)
    {
        insert(&root, arr[i]);
    }
    return root;
}

//Driver code
int main()
{
    int arr[] = {3,4,2,9,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = arrayToList(arr,n);
    display(root);
    return 0; 
}