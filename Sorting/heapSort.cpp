#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
void heapify(int arr[], int n, int i)
{
    int largest = i;       //intialize largest as root
    int l = 2 * i + 1;     //left of largest
    int r = 2 * i + 2;     //right of largest

    //if left child is larger than root
    if(l < n && arr[l] > arr[largest])
       largest = l;
    
    //if left child is larger than root
    if(r < n && arr[r] > arr[largest])
         largest = r;
   
   //if largest is not root
    if(largest != i)
    {
        swap(arr[i],arr[largest]);

        //Recursively heapify 
        heapify(arr, n , largest);
    }
}
int heapSort(int arr[], int n )
{
    //Build heap
    for(int i=n/2-1; i>=0; i--)
        heapify(arr,n,i);
        
    //extraxt element one by one from heap
    for(int i=n-1; i>0; i--)
    {
        //move current root to end
        swap(arr[0],arr[i]);
        
        //call heapify 
        heapify(arr,i,0);
    }
}
/*function to print array*/

 void printArr(int arr[], int n)
 {
    int i; 
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
 }

//Driver program
int main()
{
    int arr[100];
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;

    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    heapSort(arr,n);
    cout<<"After sorting:";
    printArr(arr,n);
    
    return 0;
}
