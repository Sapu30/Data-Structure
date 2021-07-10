#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a , b;
    //Creating a Constructor 
    /*constructor is a special member functionwith the same name of the class. 
       It is automatically invoked(called) whenever a object is created.
       It used to intialize the objects of the classes */

    public:
        Complex(void);            //constructor declaration  --> Complex(); is also fine

        void printNumber(){
            cout<<"Your Name is "<<a<<"+"<<b<<"i"<<endl; 
        }
};

Complex :: Complex(void){    //default constructor
    a = 10;
    b = 0;
}


//driver code
int main()
{
    Complex c;      //automatically invoked when object is created
    c.printNumber();

    return 0; 
}


/* Properties: 
   1. Should be declared in the public section
   2. automatically invoked whenever the object is created
   3. can not return values and have no return types
   4. can have default arguments
   5. we cannot reffer to their address.
*/