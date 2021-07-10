#include<bits/stdc++.h>
#include<string.h>
#include<cmath>
using namespace std;

//function overloading
int add(int a, int b)
{
    return a+b;
}

string add(string a, string b, string c)
{
    return a+b+c;
}

int volume(double r, int h)
{
    return(3.14 * r * r * h);
}

int volume(int a)
{
    return (pow(a,3));
}
//driver code
int main()
{
    cout<<"The sum of 3 & 6 is: "<<add(3,6)<<endl;
    cout<<"The sum of 5, 10 & 15 is: "<<add("5","10","15")<<endl; 
    cout<<"Volume of cylinder: "<<volume(5,8)<<endl;
    cout<<"volume of cube: "<<volume(3)<<endl;
    return 0;

}