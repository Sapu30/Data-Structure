#include<bits/stdc++.h>
// #include<iostream>
// #include<valarray>          // for valarray
using namespace std;

int main()
{
	// Initializing valarray
	valarray<int> varr = { 2, 1, 5, 6, 8, 7 };
    valarray<int> varr1;

    //using apply() to manipulate varr and store in varr1
    varr1 = varr.apply([](int x){return x = x*2;});
    cout<<"New valarray with manipulated values: ";
    for(int &x : varr1)
        cout<<x<<" ";
    cout<<endl;

    //sum of elements
    cout<<"sum of elements of varr: ";
    cout<<varr.sum()<<endl;
    
    cout<<"sum of elements of varr1: ";
    cout<<varr1.sum()<<endl;

    //min & max elements in varr
    cout<<"smallest elements in varr: ";
    cout<<varr.min()<<endl;
    cout<<"largest elements in varr: ";
    cout<<varr.max()<<endl;

    //swap elements of varr & varr1
    varr.swap(varr1);
   
    cout<<"elements in varr  after swapping: ";
    for(int &x : varr)
        cout<<x<<" ";
    cout<<endl;

    cout<<"elements in varr1 after swapping: ";
    for(int &x : varr1)
        cout<<x<<" ";
    cout<<endl;

    //shift elements left by 2
    varr1 = varr.shift(2);       //if +ve ---> left shift else right shift
    cout<<"After shifting elements left by 2: ";
    for(int &x : varr1)
        cout<<x<<" ";
    cout<<endl;

    // circular right shift elements by 3
    varr1 = varr.cshift(-3);       //if +ve ---> circular left shift else circular right shift
    cout<<"After circular shifting elements right by 3: ";
    for(int &x : varr1)
        cout<<x<<" ";
    cout<<endl;


    return 0;
}
