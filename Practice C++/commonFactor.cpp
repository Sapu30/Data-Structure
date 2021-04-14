#include <bits/stdc++.h>
using namespace std;

//Code to calculate common factor
int gcd(int a, int b)
{
  if(a == 0)
    return b;
  return gcd(b % a, a);
}

int commFactor(int a, int b)
{
  int n = gcd(a, b);
  int result = 0;
  for(int i = 1; i <= sqrt(n); i++)
  {
    if(n % i == 0)
    {
      if(n / i == i)
        result += 1;
      else
        result += 2;
    }
  }
  return result;
}

//Driver code
int main() {
  int a, b;
  cout<<"Enter value of a & b: ";
  cin >> a;
  cin >> b;                   
  cout<<"No. of common factors:"<<commFactor(a, b);
  return 0; 
}

