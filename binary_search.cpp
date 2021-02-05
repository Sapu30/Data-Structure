//Recursive binary search
#include <bits/stdc++.h>
using namespace std;

 int binarySearch(int a[], int low, int high, int item)
 {
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;  
        //check if item is present at mid
        if(a[mid]==item)
          return mid; 
        //if item is greater than mid 
        if(a[mid]<item)
            low=mid+1;
        else
        //if item is smaller than mid
            high=mid-1;
    }
    //item not present
    return -1;
}
    
    int main(void)
    {
     int a[]={1,8,18,21,30,54,73,80,92};
     int item=21;
     int n = sizeof(a)/sizeof(a[0]);
    
     int result = binarySearch(a,0,n-1,item);
     (result==-1) ? cout<<"Item not found"
                 : cout<<"Item Present at index: "<<result;
      return 0;
    }
 
