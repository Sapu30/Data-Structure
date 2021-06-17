#include<bits/stdc++.h>
using namespace std;

//function for fibonacci series
int fib(int n)
{
    if(n==0)
       return 0;
    else if(n==1)
       return 1;
    else
    //add previous two no. 
       return (fib(n-1)+fib(n-2));
}

//Driver code
int main()
{
    int n,i;
    cout<<"Enter value : ";
    cin>>n;
    cout<<"Fibonacci series : \n";
    for(i=0; i<n; i++)
    {
        //print each value 
        cout<<fib(i)<<"\n";
    }
    return 0;
}