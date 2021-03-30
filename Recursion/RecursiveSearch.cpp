#include<bits/stdc++.h>
using namespace std;

//function to search element 
int recSearch(int arr[], int l, int r,int x)
{
    if(l > r)                //if index of (leftmost element > rightmost element)
        return -1;   

    if(x == arr[l])          //if leftmost element == x
      return l+1;

    if(x == arr[r])          //if rightmost element == x
      return r+1;
    
    else                                    //leftmost & rightmost element get eliminate
        recSearch(arr, l+1, r-1, x);     
      
    
}

//Driver code
int main()
{
    int arr[] = {2,40,10,47,32,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int pos = recSearch(arr,0, n-1, x);
    //if condition to check element is present or not
    if(pos == -1)
    {
        cout<<"Element "<<x<<" is not present";
    }
    else
       cout<<"Element "<<x<<" is present at position "<<pos;
    return 0;
}