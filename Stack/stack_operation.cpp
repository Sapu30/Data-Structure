#include<bits/stdc++.h>
using namespace std; 
  
//Stack basic operation i.e push & pop
int main() 
{ 
    int count = 0;
    stack<int> mystack; 
    mystack.push(1); 
    mystack.push(2); 
    mystack.push(3); 
    mystack.push(4); 
    // Stack becomes 4, 3, 2, 1 
    

    mystack.pop(); 
    mystack.pop(); 
    // Stack becomes 2, 1 
  
    cout<<"Elements of stack : ";
    while (!mystack.empty()) { 
        cout <<" " << mystack.top(); 
        mystack.pop(); 
        count++;
    } 
    cout<<"\nNo. of elements in stack : "<<count;
    return 0;
} 
