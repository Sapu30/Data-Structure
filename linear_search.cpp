#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int n,item,i,flag;
    cout<<"Enter No. of elements:";
    cin>>n;
    cout<<"Elements are : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>item;
    for(i=0;i<n+1;i++)
    {
       if(a[i]==item)
       {
         flag=i+1;
         break;
       }
       else
         flag=0;
    }
    if(flag==0)
    {
        cout<<"Item not found";
    }
    else
        cout<<"Item found at location : "<<flag;
    return 0;
}

