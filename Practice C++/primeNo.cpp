#include<bits/stdc++.h>
using namespace std;

string isPrime(int n)
{
    for(int i = 1; i <= sqrt(n); i++)
    {
        int count=0;
        for(int i=1;i<=n;i++)
        {
	        if(n%i==0)
		    {
			  count++;
		    }
	    }
  
	    if(count==2)
		    return "Yes";
	    else
		    return "No";
    }
}

int main() {
	int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
	return 0;
}  