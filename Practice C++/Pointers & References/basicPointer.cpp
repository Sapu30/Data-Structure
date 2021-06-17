#include<bits/stdc++.h>
using namespace std;

int main()
{
    //pointer -> variable which holds the address of another variable
    int a = 7;
    int *b = &a;
   
    
    //& -> address of (operator)
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    //* -> value at (dereferencing operator)
    cout<<"The value at address b is "<<*b<<endl;

    //pointer to pointer
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    //dereferencing operator 
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value(value(c)) is "<<**c;
    return 0;
}