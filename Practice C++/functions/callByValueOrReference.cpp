#include<bits/stdc++.h>
using namespace std;

//call by reference
void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by referenceusing c++ reference variable
//int & swapPointerRefVar(int &a, int &b)
void swapPointerRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    //return a;
}

int main()
{
    int a = 8, b = 2;
    cout<<"value of a: "<<a<<" and b: "<<b<<endl;
    //swap(a,b);               //run automatically...
    //swapPointer(&a, &b);     //swap a & b using pointer reference
    //swapPointerRefVar(a, b) = 673; //swap a & b using reference variable
    swapPointerRefVar(a, b);
    cout<<"value of a: "<<a<<" and b: "<<b<<endl;

    return 0;
}