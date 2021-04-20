#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Deque
{
    int arr[MAX];
    int front, rear, size;
  public:
    Deque(int size)
    {
        front = -1;
        rear = 0;
        this -> size = size;
    }

    //operation on Deque
    void insertFront(int key);
	void insertRear(int key);
	void deleteFront();
	void deleteRear();
	bool isFull();
	bool isEmpty();
	int getFront();
	int getRear();

};

//chech deque is full or not
bool Deque :: isFull()
{
    return((front == 0 && rear == size - 1) || front == rear + 1);
}

//check deque is empty or not
bool Deque :: isEmpty()
{
    return(front == -1);
}

//insertion at front
void Deque :: insertFront(int key)
{
    if(isFull())
    {
        cout<<"Overflow \n"<<endl;
        return;
    }
    if(isEmpty())
    {
        front = rear = 0;
    }
    else if(front == 0)
        front = size - 1;
    else 
        front = front - 1;

    arr[front] = key;
}

//insertion at rear
void Deque :: insertRear(int key)
{
     if(isFull())
    {
        cout<<"Overflow \n"<<endl;
        return;
    }
    if(isEmpty())
    {
        front = rear = 0;
    }
    else if(rear == size - 1)
        rear = 0;
    else 
        rear = rear + 1;

    arr[rear] = key;  
}
//deletion from front
void Deque :: deleteFront()
{
    if(isEmpty())
    {
        cout<<"Underflow \n"<<endl;
        return;
    }
    if(front == rear)
    {
        front = rear = -1;
    }
    else if(front == size - 1)
        front = 0;
    else 
        front = front + 1;
}

//deletion at rear
void Deque :: deleteRear()
{
    if(isEmpty())
    {
        cout<<"Underflow \n"<<endl;
        return;
    }
    if(front == rear)
    {
        front = rear = -1;
    }
    else if(rear == 0)
        rear = size - 1;
    else 
        rear = rear - 1;
}

//get front element
int Deque::getFront()
{
	if (isEmpty())
	{
		cout << " Underflow\n" << endl;
		return -1 ;
	}
	return arr[front];
}

//get rear element
int Deque::getRear()
{
	if(isEmpty() || rear < 0)
	{
		cout << " Underflow\n" << endl;
		return -1 ;
	}
	return arr[rear];
}

//driven pg.
int main()
{
	Deque dq(5);
	cout << "Insert element at rear end : 5 \n";
	dq.insertRear(5);

	cout << "insert element at rear end : 10 \n";
	dq.insertRear(10);

	cout << "get rear element " << " "
		<< dq.getRear() << endl;

	dq.deleteRear();
	cout << "After delete rear element new rear"
		<< " become " << dq.getRear() << endl;

	cout << "inserting element at front end \n";
	dq.insertFront(15);

	cout << "get front element " << " "
		<< dq.getFront() << endl;

	dq.deleteFront();

	cout << "After delete front element new "
	<< "front become " << dq.getFront() << endl;
	return 0;
}