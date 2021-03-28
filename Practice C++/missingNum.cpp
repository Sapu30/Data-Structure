#include<bits/stdc++.h>
using namespace std;

//Find missing number from 1-D array in the range of 1-n
int missingNum(int arr[], int n)
{
    int x;
    for(int i = 0; i < n-1; i++)
    {
        //if next value is not exist
        if(arr[i+1] != arr[i] + 1)
           x = arr[i] + 1;
    }
   return x;
}

//Driver code
int main()
{
    int arr[] = {1,2,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Missing Element is "<<missingNum(arr, n);

    return 0;
}