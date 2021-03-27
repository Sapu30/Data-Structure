#include<bits/stdc++.h>
using namespace std;

//Find majority element in an array arr[] of size n is an element 
//that appears more than n/2 times
void majority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;  //at starting assume that there is no majority element
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
    //if count of current element is greater than maxCount
    if(count > maxCount)
    {
       maxCount = count;
       index = i;
    }
}
    //if maxCount is greater than half of the size of array element, return element
    if(maxCount > n/2)
       cout<<arr[index]<<endl;
    else
       cout<<"No Majority Element";
    
}

//Driver code
int main()
{
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    majority(arr, n);

    return 0;
}