#include<bits/stdc++.h>
using namespace std;

//node having pointer to left & right child
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this -> data = data;
        left = right = NULL;
    }
};

//preorder : NLR
void Preorder(struct Node* node)
{
    if(node == NULL)
       return;
    
    cout<<node -> data<<" ";
    Preorder(node -> left);
    Preorder(node -> right);
}

//Inorder : LNR
void Inorder(struct Node* node)
{
    if(node == NULL)
       return;

    Inorder(node -> left);
    cout<<node -> data<<" ";
    Inorder(node -> right);
}

//Postorder : LRN
void Postorder(struct Node* node)
{
    if(node == NULL)
       return;
    Postorder(node -> left);
    Postorder(node -> right);
    cout<<node -> data<<" ";
}

//Driven code
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"Preorder Traversal: ";
    Preorder(root);
    cout<<"\nInorder Traversal: ";
    Inorder(root);
    cout<<"\nPostorder Traversal: ";
    Postorder(root);

    return 0;
}
