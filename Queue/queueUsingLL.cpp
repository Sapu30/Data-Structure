#include<bits/stdc++.h>
using namespace std;

//Structure node
struct Node{
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Queue{
    Node *front, *rear;
    Queue(){
        front = rear = NULL;
    }
    //Enqueue operation to add new element
    void enqueue(int x)
    {
        //create a new LL node
        Node* temp = new Node(x);
        //if node is empty, then front and rear node is same
        if(rear == NULL){
           front = rear = temp;
           return;
        }
        //add the new node to LL and change the rear
        rear -> next = temp;
        rear = temp;
    }
    //Dequeue operation to delete element
    void dequeue()
    {
        //if queue is empty, return NULL
        if(rear == NULL)
           return;
        //store front in temp and move front one node ahead
        Node* temp = front;
        front = front -> next;

        //If now front becomes NULL, then change rear also to NULL
        if(front == NULL)
           rear = NULL;

        delete(temp);
    }
};

//Driven code
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();

    cout<<"Queue Front: "<<(q.front) -> data<<endl;
    cout<<"Queue Rear: "<<(q.rear) -> data;

}