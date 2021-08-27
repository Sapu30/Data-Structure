#include<bits/stdc++.h>
using namespace std;

// Binary predicate which returns 0 if numbers found equal
int compare(const void* ap, const void* bp)
{
    // Typecasting
    const int* a = (int*)ap;
    const int* b = (int*)bp;
  
    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    else
    //element found equal
        return 0;
}

int main()
{
    int arr[] = {2,8,0,4,5,12,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
  

    cout<<"sorting in ascending order : ";
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
 
    if(binary_search(arr, arr+n, key))
    {
        cout<<"Element found in array";
    }
    else
        cout<<"Element not found in array";


    cout<<endl;
    
    // Calling std::bsearch
    // Typecasting the returned pointer to int
    int* p1 = (int*)std::bsearch(&key, arr, n, sizeof(arr[0]), compare);
  
    // If non-zero value is returned, key is found
    if (p1)
        std::cout << key << " found at position " <<(p1-arr)<< '\n';
    else
        std::cout << key << " not found\n";
  
    return 0;

}

