//Implement basic stack operation using Array
#include<bits/stdc++.h>
using namespace std;

//Static size i.e Array
#define MAX 1000

class Stack{
    int top;

public:
    int a[MAX];               //Maximum size of stack
    Stack()                   //intially the stack is empty
    {
        top = -1;
    }
    int push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

//Code to insert element in stack
int Stack::push(int x)
{
    if(top >= (MAX - 1))
    {
        cout<<"Stack Overflow";
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<<" pushed into the stack\n";
        return true;
    }
}

//Code to delete (top) element from stack
int Stack :: pop()
{
    if(top < 0)
    {
        cout<<"Stack Underflow";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

//Code to print top element of the stack
int Stack :: peek()
{
    if(top < 0)
    {
        cout<<"Stack Underflow";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}

//If stack is empty
bool Stack :: isEmpty()
{
    return(top < 0);
}

//Driver code
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    //Stack become 30, 20, 10

    cout<<s.pop()<<" popped from the stack\n";   //top element get deleted
    cout<<"Elements present in stack : ";        //Stack become 20, 10
    while(!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
    return 0;

}