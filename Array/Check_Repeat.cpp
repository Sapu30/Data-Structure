#include<bits/stdc++.h>
using namespace std;

//To check whether any digit in a no. appears more then once
int main()
{
    //declaring array having element 0 at each index
    int arr[10] = {0};  
    int n, rem;
    cout<<"Enter no.:";
    cin>>n;
    //Main function
    while(n>0)
    {
        rem = n % 10;   
        if(arr[rem] == 1)  //if element already exist
           break;
        arr[rem] = 1;      //if not exist then put 1 at the place of 0 and compare next time 
        n = n / 10;
    }
    if(n > 0)
        cout<<"Yes";   //if element repeated
    else
        cout<<"No";

    return 0;
}

/*
put 0 to each index of array ... take value one by one from no. and put 1 
at place of index no. which is present in no. so that next time when we compare 
and if 1 exist in the element then the value is now repeating otherwise not and 
put 1 at the place of index value of that no.
*/