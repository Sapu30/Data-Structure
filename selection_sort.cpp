#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
 int selectSort(int arr[], int n)
 {
    int min,i;
    for(int i=0; i<n-1; i++)
    {   
        //find minimum element 
        min=i;
        for(int j=i+1;j<n;j++)
            if(arr[min]>arr[j])
               min=j;
        //swap the minimum element 
        swap(&arr[min],&arr[i]);
    }
    
 }
 /*function to print array*/
 void printArr(int arr[], int size)
 {
    int i; 
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
 }
 //Driver program
 int main()
 {
    int arr[10],n;
    cout<<"Enter no. of elements:";
    cin>>n;
    cout<<"Array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectSort(arr,n);
    cout<<"Sorted array:";
    printArr(arr,n);
    return 0;
 }
