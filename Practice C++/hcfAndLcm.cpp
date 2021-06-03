#include<iostream>
using namespace std;
int main()
{
    int x,y,hcf,lcm,t,b,a;
    cout<<"Enter two integers\n";
    cin>>x;
    cin>>y;
    a = x;
    b = y;
    while(b!=0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    hcf = a;
    lcm = (x*y)/hcf;
    cout << "HCF is "<<hcf<<" and LCM is "<<lcm<<"\n";
    return 0;
}