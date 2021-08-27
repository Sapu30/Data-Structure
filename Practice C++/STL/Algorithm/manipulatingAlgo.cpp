//Manipulating STL Algorithm 
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

    cout<<"After sorting: ";
    sort(vect.begin(), vect.end());
    for(int i = 0; i < n; i++){
        cout<<vect[i]<<" ";}
    cout<<endl;

    cout<<"1. erase element: ";
    vect.erase(vect.begin()+2);
    for(int i = 0; i < n-1; i++){
        cout<<vect[i]<<" ";}
    cout<<endl;

    cout<<"2. delete duplicates: ";
    vect.erase(unique(vect.begin(), vect.end()), vect.end());
    for(int i = 0; i < n-2; i++){
        cout<<vect[i]<<" ";}
    cout<<endl;

    int a[] = {1,2,3,5,4};
    vector<int> v(a, a+5);
    cout<<endl;
    cout<<"New vector is: ";
    for(int i = 0; i < 5; i++){
        cout<<v[i]<<" ";}
    cout<<endl;

    cout<<"3. next permutation: ";
    next_permutation(v.begin(),v.end());
    for (int i=0; i<5; i++)
        cout << v[i] << " ";
    cout<<endl;

    cout<<"4. prev permutation: ";
    prev_permutation(v.begin(),v.end());
    for (int i=0; i<5; i++)
        cout << v[i] << " ";
    cout<<endl;

    cout<<"5. distance b/w two elements: ";
    cout<<distance(v.begin(),max_element(v.begin(),v.end()));

    return 0;

}