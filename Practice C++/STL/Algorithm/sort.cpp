#include<bits/stdc++.h>
using namespace std;

struct Interval {
    int start, end;
};
 
// Compares two intervals
// according to staring times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}


int main()
{
    int arr[] = {2,8,0,4,5,12,80};
    int n = sizeof(arr)/sizeof(arr[0]);

    Interval a[] = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
    int m = sizeof(a)/sizeof(a[0]);

    //sorting in ascending order
    cout<<"sorting in ascending order : ";
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting in decending order
    cout<<"sorting in decending order : ";
    sort(arr, arr + n, greater<int>());
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    //sorting in a paricular order
    cout<<"sorting in a paricular order : ";
    sort(a, a + m, compareInterval);
    for (int i = 0; i < m; i++)
    {
        cout << "[" << a[i].start << "," << a[i].end<< "] ";
    }
    return 0;
}



