//Non - Manipulating STL Algorithm 
#include<bits/stdc++.h>
/* 
#include <iostream>
#include <algorithm>        
#include <vector>
#include <numeric>      //for accumulate
*/
using namespace std;

int main()
{
    int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);

    cout<<"vector is: ";
    for(int i = 0; i < n; i++){
        cout<<vect[i]<<" ";}
    cout<<endl;

    cout<<"1. reverse the vector: ";
    reverse(vect.begin(), vect.end());
    for(int i = 0; i < n; i++){
        cout<<vect[i]<<" ";}
    cout<<endl;

    cout<<"2. sorting in ascending order : ";
    sort(vect.begin(), vect.end());
    for(int i = 0; i < n; i++){
        cout<<vect[i]<<" ";}
    cout<<endl;

    cout<<"3. maximum element: ";
    cout<<*max_element(vect.begin(), vect.end())<<endl;
    

    cout<<"4. minimum element: ";
    cout<<*min_element(vect.begin(), vect.end())<<endl;

    cout<<"5. The summation of  vector elements: ";
    cout<<accumulate(vect.begin(), vect.end(),0)<<endl;
    
    cout<<"6. Count the occurance of x in vector: ";
    cout<<count(vect.begin(), vect.end(), 20)<<endl;

    cout<<"7. find the first occurance of x in vector: ";
    find(vect.begin(), vect.end(),20) != vect.end() ? cout << "\n  Element found" : cout << "\nElement not found";
    cout<<endl;

    cout<<"8. binary search of an element: ";
    binary_search(vect.begin(), vect.end(), 20) ? cout<<"element found" : cout<<"not found";
    cout<<endl;

    cout<<"9. lower bound of x in vector: ";
    auto l = lower_bound(vect.begin(), vect.end(),20);
    cout << l-vect.begin() << endl;

    cout<<"10. upper bound of x in vector: ";
    auto u = upper_bound(vect.begin(), vect.end(),20);
    cout << u-vect.begin() << endl;

    return 0;
}

