#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int partition(int arr[], int low, int high)
{
    // pivot (Element to be placed at right position)
    int pivot = arr[high];  
 
    int i = (low - 1); // Index of smaller element

    for(int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i + 1],&arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
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
    int a[100];
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;

    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quickSort(a,0,n-1);
    cout<<"After sorting:";
    printArr(a,n);
    
    return 0;
}
