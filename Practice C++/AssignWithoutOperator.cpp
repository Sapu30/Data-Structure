#include<bits/stdc++.h>
using namespace std;

//Assign value to y without using arithmetic operator
int AssignValue(int a, int b, int x)
{
    int y;
    int arr[2];

    //store value in array
    arr[0] = a;  //if x = 0 , print y = a
    arr[1] = b;  //if x = 1 , print y = b

    y = arr[x];

    return y;

    //OR

    /*int arr[] = {a, b};             
    return *(arr + c); */
}
int main()
{
    int a, b, x = 1;
    cout<<"Enter value of a & b :";
    cin>>a;
    cin>>b;

    cout<<"Value assigned to y is : "<<AssignValue(a,b,x);
    return 0;
}

/*
If 'x' is 0, 
   Assign value 'a' to variable 'y' 
Else (If 'x' is 1)
   Assign value 'b' to variable 'y'.
*/