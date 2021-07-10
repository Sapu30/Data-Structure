#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a , b;
    //Creating a Constructor 
    public:
        Complex(int, int);            //constructor declaration 

        void printNumber(){
            cout<<"Your Name is "<<a<<"+"<<b<<"i"<<endl; 
        }
};

Complex :: Complex(int x, int y){    //parameterized constructor
    a = x;
    b = y;
}


//driver code
int main()
{
    //implicit call
    Complex c1(4,6);      //automatically invoked when object is created
    c1.printNumber();

    //explicit call
    Complex c2 = Complex(5,7);
    c2.printNumber();

    return 0;
}
