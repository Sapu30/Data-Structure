#include<iostream>
using namespace std;

//Solid Rectangle
void solid_rectangle(int a, int b)
{
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
}
    
//Hollow rectangle
void hollow_rectangle(int a, int b)
{
    int i, j;
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= b; j++)
       {
            if( i == 1 || i == a || j == 1 || j == b)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
       }
        cout<<"\n";
    }
}

int main()
{
    int a, b;
    cout<<"Enter no. of rows:";
    cin>>a;
    cout<<"Enter no. of col:";
    cin>>b;
    cout<<endl;
    solid_rectangle(a,b);
    cout<<endl;
    hollow_rectangle(a,b);

    return 0;
}