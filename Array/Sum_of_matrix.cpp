#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int m,n,p,q,i,j;
    cout<<"Enter rows & column of matrix A : ";
    cin>>m>>n;
    cout<<"Enter rows & column of matrix B : ";
    cin>>p>>q;
    if((m!=p) && (n!=q))
    {
        cout<<"Matrices cannot be added!";
        exit(0);
    }
    cout<<"Enter elements of matrix A:";
    for(i=0;i<m;i++)
      for(j=0;j<n;j++){
        cout<<"A = "<<i+1<<j+1<<":";
        cin>>a[i][j];
      }
      
    cout<<"Enter elements of matrix B:";
    for(i=0;i<p;i++)
      for(j=0;j<q;j++){
        cout<<"B = "<<i+1<<j+1<<":";
        cin>>b[i][j];
      }
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        sum[i][j]=a[i][j]+b[i][j];
    cout<<"Sum of matrices : \n";  
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {
        cout<<sum[i][j]<<" ";
        if(j==n-1)
          cout<<endl;
      }
    return 0;
}
