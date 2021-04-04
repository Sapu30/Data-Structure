#include<bits/stdc++.h>
using namespace std;

//This function return median after sorting array
int getMedian(int arr1[], int arr2[], int n)
{
    int i = n - 1; 
    int j = 0;
    while(arr1[i] > arr2[j] && j < n && i > -1)
       swap(arr1[i--], arr2[j++]);
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    return(arr1[n - 1] + arr2[0])/2;
}

//Driver code
int main()
{
    int arr1[] = {1, 12, 15, 26, 38};
    int arr2[] = {2, 13, 17, 30, 45};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    if(n1 == n2)
       cout<<"Median is "<<getMedian(arr1, arr2, n1);
    else
        cout << "Doesn't work for arrays"
            << " of unequal size" ;
    getchar();
    return 0;
}