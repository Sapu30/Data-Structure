#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n > 1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
    cout<<"\n";
}
int main()
{
    int n;
    cout<<"Enter the no.: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" is: ";
    cout<<fact(n);


}