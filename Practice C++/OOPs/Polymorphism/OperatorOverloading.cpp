#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }      

    void print(){cout<<real<<" + "<<imag<<"i";}

};

//driven code
int main()
{
    Complex c1(5,10), c2(4,2);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;

}