#include <bits/stdc++.h>
using namespace std;
 
//function to find largest element in an array
int largest(int arr[], int n)
{
    //let assume first element is largest
    int max = arr[0];
    
    //traverse array element
    for(int i=1; i<n; i++)
    //compare every element with new/current max value
        if(max < arr[i])
            max = arr[i];
    return max;
}

//Driver code
int main() 
{
    int arr[] = {2,40,10,47,32,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest Element : "<<largest(arr, n);
    return 0;
}