#include<bits/stdc++.h>
using namespace std;

//Forward declaration
class Complex;          //we are declaring here that we will use class Complex in future 

class Cal{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int sumRealComplex(Complex, Complex);    
        int sumComComplex(Complex, Complex);    
};


class Complex{
    int a, b;          //private 

    //Individually declaring function as friend

  /*friend int Cal :: sumRealComplex(Complex, Complex);
    friend int Cal :: sumComComplex(Complex, Complex);  */

    //Alter : Declaring the entire cal class as friend
    friend class Cal;                //can use any thing from class Complex
    
    public:
       void setNumber(int n1, int n2)
       {
           a = n1; 
           b = n2;
       }

       void printNumber(){
           cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
       }
};

int Cal :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}

int Cal :: sumComComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}

//driven code
int main()
{
    Complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);

    Cal c;
    int res1 = c.sumRealComplex(o1,o2);
    cout<<"Sum of real part of o1 & o2 is: "<<res1<<endl;

    int res2 = c.sumComComplex(o1,o2);
    cout<<"Sum of complex part of o1 & o2 is: "<<res2<<endl;


    return 0;
}