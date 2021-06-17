#include<bits/stdc++.h>
#include<math.h>
//or #include<cmath>
using namespace std;

int main()
{
    double x = 2.5, y = 1.5;
    //root:
    cout<<"sq. root of x: "<<sqrt(x)<<endl;
    cout<<"cube root of x: "<<cbrt(x)<<endl;

    int z = -5;
    //some imp functions:
    cout<<"absolute value of y: "<<abs(z)<<endl;   //for floating value use fabs(x)

    cout<<"x power y: "<<pow(x,y)<<endl;

    cout<<"max of x & y: "<<max(x,y)<<" "<<"min of x & y:"<<min(x,y)<<endl;

    cout<<"floor of x: "<<floor(x)<<endl;
    cout<<"ceil of x: "<<ceil(x)<<endl;

    cout<<"exponent value of x: "<<exp(x)<<endl;
    cout<<"e^x - 1: "<<expm1(x)<<endl;
    cout<<"log value of x: "<<log(x)<<endl;
    cout<<"modulus/reminder of x/y: "<<fmod(3.5,4)<<endl;


    cout<<"hypotenuse having 2 other sides are 3.5 & 4.5: "<<hypot(3.5,4.5)<<endl;
    cout<<"postive difference b/w 2 value: "<<fdim(-5,-3)<<endl;
    cout<<"return without losing precision x*y+z: "<<fma(5,6,3)<<endl;

    //trigonometric functions:
    cout<<"sin(x): "<<sin(x)<<endl;
    cout<<"cos(x): "<<cos(x)<<endl;
    cout<<"tan(x): "<<tan(x)<<endl;

    cout<<"hyperbolic sin: "<<sinh(x)<<endl;
    cout<<"hyperbolic cos: "<<cosh(x)<<endl;
    cout<<"hyperbolic tan: "<<tanh(x)<<endl;

    x = 1.0;
    cout<<"arcsine of x: "<<asin(x)<<endl;
    cout<<"arccosine of x: "<<acos(x)<<endl;
    cout<<"arctangent of x: "<<atan(x)<<endl;
   
    return 0;
}