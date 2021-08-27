#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin>>a>>b;
    int max = a > b ? a : b;

    while(max > 0)
    {
        //bitwise AND operation
        if((a & 1) != (b & 1))        // x & 1 is equivalent to x % 2
           count++;
        
        a = a>>1;                    // x >> 1 is equivvalent to x / 2
        b = b>>1;
        max = max>>1;
    }

    cout<<count<<endl;

    return 0;
}