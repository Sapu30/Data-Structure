#include<bits/stdc++.h>
using namespace std;

// find the sum of contiguous subarray within a one-dimensional array of numbers
// that has the largest sum. 
int maxSubArraySum(int arr[], int n)
{
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for(int i =0; i < n; i++)
    {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;

}

//Driver code
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSubArraySum(arr, n);
    return 0;
}
