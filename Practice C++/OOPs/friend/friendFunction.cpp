#include<bits/stdc++.h>
using namespace std;

//(1+4i) + (5+8i) = 6+12i 
class Complex{
    int a, b;          //private 
    public:
       void setNumber(int n1, int n2)
       {
           a = n1; 
           b = n2;
       }

       //non member - sumComplex function is allowed to do anything with 
       //pvt members of class Complex using friend funtion
       friend Complex sumComplex(Complex o1, Complex o2);
       void printNumber(){
           cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
       }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
//driven code
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}

/*properties of friend function:
1. Not in the scope of class
2. since it is not the part of the class....it can't be called by class object
3. usually contain argument as object
4. can be declared any section (pvt/public) in the class
5. cannot access the member directly by their names and need object_name.member_name 
to access any member
*/