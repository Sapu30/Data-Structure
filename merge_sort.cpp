#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int s, int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    
    //compare two array after division and sort
    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    //if elements remain in any of array after sorting
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    //copy all elements to original array
    for(int i=s; i<=e; i++)
    {
        a[i]=temp[i];
    }
}

void mergeSort(int a[], int s, int e){
    if(s>=e){
        return;
    }
//follow 3 steps
    //1. Divide
    int mid=(s+e)/2;
    //2. Recursively the array - s, mid and mid+1, e
    mergeSort(a, s, mid);
    mergeSort(a,mid+1,e);

    //3. merge the two sort
    merge(a,s,e);
}

//Driver code
int main()
{
    int a[100];
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;

    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    cout<<"After sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}