#include<bits/stdc++.h>
using namespace std;

void multiply(int m1, int m2, int mat1[][2], int n1, int n2, int mat2[][2])
{
   int result[m1][n1],i,j,k;
   for(int i=0; i<m1; i++)
   {
       for(int j=0; j<n2; j++)
       {
           result[i][j] = 0;
           for(k=0; k<m2; k++)
           {
            result[i][j]+=mat1[i][k]*mat2[k][j];
           }
       }
   }
   for (i = 0; i < m1; i++) 
   {
        for (j = 0; j < n2; j++) 
        {
            cout<<result[i][j] <<" ";
        }
        cout << "\n";
   }
}


int main()
{
    int mat1[][2] = { { 2, 4 }, { 3, 4 } };
    int mat2[][2] = { { 1, 2 }, { 1, 3 } };
    int m1 = 2, m2 = 2, n1 = 2, n2 = 2;
   
    // Function call
    multiply(m1, m2, mat1, n1, n2, mat2);
    return 0;
}
 