#include<bits/stdc++.h>
using namespace std;

//creating structure
struct Queue{
    int front, rear;
    int size, *arr;
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }

    void enQueue(int x);
	int deQueue();
	void displayQueue();
};

//function to add new element to the queue
void Queue::enQueue(int x)
{
    if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        printf("\nQueue is full");
        return;
    }
    else if(front == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else if(rear == size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = x;
    }
    else 
    {
        rear++;
        arr[rear] = x;
    }
}

//function to delete element
int Queue::deQueue()
{
    if(front == -1)
    {
        printf("\nQueue is empty");
        return INT_MIN;
    }
    int data = arr[front];
    arr[front] = -1;
    if(front == rear)
    {
        front = rear = -1;
    }
    else if(front == size - 1)
        front = 0;
    else 
        front++;

    return data;
}

//function to display queue elements
void Queue::displayQueue()
{ 
    if(front == -1)
    {
       printf("\nQueue is empty");
       return;
    }

    printf("\nElements in circular queue: ");
    if(rear >= front)
    {
        for(int i = front; i <= rear; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for(int i = front; i < size; i++)
           printf("%d ", arr[i]);

        for(int i = 0; i <= rear; i++)
           printf("%d ", arr[i]);
    }
}

//driven code
int main()
{
	Queue q(5);

	q.enQueue(14);
	q.enQueue(22);
	q.enQueue(13);
	q.enQueue(-6);

	q.displayQueue();

	printf("\nDeleted value = %d", q.deQueue());
	printf("\nDeleted value = %d", q.deQueue());

	q.displayQueue();

	q.enQueue(9);
	q.enQueue(20);
	q.enQueue(5);

	q.displayQueue();

	q.enQueue(20);
	return 0;
}