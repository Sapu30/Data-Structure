#include<iostream>
using namespace std;

/*function to sort array using insertion sort*/
int insertionSort(int arr[], int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        //make the 2nd(index 1) element key and then compare with other elements in array
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            //if the key element is smaller than other element ...replace it one by one
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    int arr[10],n;
    cout<<"Enter no. of elements:";
    cin>>n;
    cout<<"Array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"Sorted array:";
    printArr(arr,n);
    return 0;
 }
