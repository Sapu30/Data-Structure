#include<bits/stdc++.h>
using namespace std;

//Multiple Inheritance : derived from 2 or more base class
class base1{
    protected:
       int base1int;
    public:
       void set_base1int(int a)
       {
           base1int = a;
       } 
};

class base2{
    protected:
       int base2int;
    public:
       void set_base2int(int a)
       {
           base2int = a;
       } 
};

class derived : public base1, public base2{
    public:
       void show(){
           cout<<"The value of Base1 is "<<base1int<<endl;
           cout<<"The value of Base2 is "<<base2int<<endl;
           cout<<"Sum of base1 & base2 : "<<base1int + base2int<<endl;
       }
};

/* The inherited derived class will look somthing like this:
Data Members:
    base1int --> protected
    base2int --> protected
Member Functions:
    set_base1int()  --> public
    set_base2int()  --> public
    set_show()      --> public
*/

//driven code
int main()
{
    base1 b1;
    base2 b2;
    derived d;
    d.set_base1int(62);
    d.set_base2int(23);
    d.show();
    return 0;
}