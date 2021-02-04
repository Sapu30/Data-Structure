#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int m,n,p,q,i,j,k;
    cout<<"Enter rows & column of matrix A : ";
    cin>>m>>n;
    cout<<"Enter rows & column of matrix B : ";
    cin>>p>>q;
    if(n!=p)
    {
        cout<<"Matrices cannot be multiply!";
        exit(0);
    }
    cout<<"Enter elements of matrix A:";
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        cout<<" ";
        cin>>a[i][j];
      }
      cout<<"\n";
    }
      
    cout<<"Enter elements of matrix B:";
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        cout<<" ";
        cin>>b[i][j];
      }
      cout<<"\n";
    }
    
    for(i=0;i<n;i++)
    {
      for(j=0;j<p;j++)
      {
        mul[i][j]=0;
        for(k=0;k<q;k++)
        {
            mul[i][j]+=a[i][k]*b[k][j];
        }
      }
    }
    cout<<"Product of matrices : \n";  
    for(i=0;i<n;i++)
    {
      for(j=0;j<p;j++)
      {
        cout<<mul[i][j]<<" ";
      }
      cout<<"\n";
    }
    return 0;
}


