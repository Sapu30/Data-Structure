#include<bits/stdc++.h>
using namespace std;

//constructor overloading : miltiple constructor with diffrent parameter
class Complex{
    int a, b;

    public:
       //1
       Complex(){
           a = 2;
           b = 2;
       }

       //2
       Complex(int x, int y)
       {
           a = x;
           b = y;
       }
        
        //3
        Complex(int x)
        {
            a = x;
            b = 0;
        }

       void printNumber(){
           cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
       }
};

int main()
{
    Complex c1, c2(4,6), c3(5);
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}