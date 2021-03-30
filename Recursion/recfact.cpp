#include<bits/stdc++.h>
using namespace std;

//Factorial using recursion
int fact(int n)
{
    if(n>1)
    //recursion :  call fact() again & again till condition is true
        return n * fact(n-1);
    else
        return 1;
}

//Driver code
int main()
{
    int n;
    cout<<"Enter value : ";
    cin>>n;
    cout<<"\n Factorial is : "<<fact(n);
    return 0;
}
