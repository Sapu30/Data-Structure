#include<bits/stdc++.h>
using namespace std;

//function to perform calculation
int ishappy(int n)
{
    int sum = 0, r, val;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        sum += r*r;
    }
    //if true return 1, if false return 0 else call function again
    if(sum == 1)
      return 1;
    else if(sum < 10)
      return 0;
    else
      return ishappy(sum);
}

//Driver code
int main()
{
    int x;
    cout<<"Enter no. = ";
    cin>>x;
    if(x==1)
      cout<<"true";
    else if(x<10)   //because sq of any no. < 10 can't be 1 except 1
      cout<<"false";
    else 
      cout<<ishappy(x);
    return 0;
}

/* Explaination :
  let assume no. = 19
  1^2 + 9^2 = 82
  8^2 + 2^2 = 68
  6^2 + 8^2 = 100
  1^2 + 0^2 +0^2 = 1
  hence the function is true and return 1
  else return 0 for function is false*/ 