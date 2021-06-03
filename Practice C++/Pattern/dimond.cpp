#include<bits/stdc++.h>
using namespace std;

void diamond(int m)
{
    int k = 0;
    for(int i = 1; i <= m; i++, k = 0)
    {
        for(int j = 1; j <= m - i; j++)
        {
           cout<<" ";
        }
        while(k != 2*i-1)
        {
            cout<<"*";
            ++k;
        }
        cout<<"\n";
    }
    for(int i = m; i >= 1; i--)
    {
        for(int j = 0; j < m - i; j++)
        {
           cout<<" ";
        }
        for(int j = i; j <= (2*i-1); j++)
        {
            cout<<"*";
        }
        for(int j = 0; j < i-1; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }
} 

void hollow_diamond(int m)
{
    int k;    //k = spaces
    for(int i = 1; i <= m; i++)
    {
        for(int k = i; k < m; k++)
        {
           cout<<" ";
        }
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            if(j == 1 || j == (2 * i - 1))
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<"\n";
    }

    for(int i = m; i >= 1; i--)
    {
        for(int k = m-1; k >= i; k--)
        {
           cout<<" ";
        }
        for(int j = (2 * i - 1); j >= 1 ; j--)
        {
            if(j == 1 || j == (2 * i - 1))
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<"\n";
    }
}

void solid_half_diamond(int m)
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= i; j++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = m; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    int m;
    cout<<"enter no. of rows:";
    cin>>m;
    
    cout<<endl;
   
    diamond(m);  

    cout<<endl;
    hollow_diamond(m);

    cout<<endl;
    solid_half_diamond(m);
    return 0;
}