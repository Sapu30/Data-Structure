#include<bits/stdc++.h>
using namespace std;

void half_pyramid(int m)
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= i; j++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
}


void inverted_half_pyramid(int m)
{
    for(int i = m; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
}

void inverted_hollow_half_pyramid(int m)
{
    for(int i = m; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
           if(i == 1 || j == 1 || i == m || j == i)
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<"\n";
    }
}

void pyramid(int m)
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

}

void rev_pyramid(int m)
{
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

void hollow_pyramid(int m)
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
            if(i == m || j == 1 || j == (2 * i - 1))
              cout<<"*";
            else
              cout<<" ";
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
    half_pyramid(m);

    cout<<endl;
    inverted_half_pyramid(m);

    cout<<endl;
    inverted_hollow_half_pyramid(m);

    cout<<endl;
    pyramid(m);

    cout<<endl;
    rev_pyramid(m);

    cout<<endl;
    hollow_pyramid(m);

    return 0;
}