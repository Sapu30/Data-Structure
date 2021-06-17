#include<bits/stdc++.h>
using namespace std;

int main()
{
    //new operator to allocate memory
    int *p = NULL;
    p = new(nothrow) int;     //if enough memoery is not available during runtime
    if(!p)
    {
        cout<<"Memory not available: \n";
    }
    else{
        *p = 29;
        cout<<"Vlaue of p: "<<*p<<endl;
    }

    float *q = new float(23.76);
    cout<<"Vlaue of q: "<<*q<<endl;


    //to allocate block of memory i.e array
    int n = 5;
    int *r = new(nothrow) int[n];

    if(!r)
    {
        cout<<"Memory not available: \n";
    }
    else{
        for(int i = 0; i < n; i++)
          r[i] = i+1;
        
        cout<<"Vlaue store in r: ";
        for(int i = 0; i < n; i++)
        { 
            cout<<r[i]<<" ";
        }
       
    }

    //deallocate memory after use
    delete p;
    delete q;
    delete[] r;

    return 0;
}
