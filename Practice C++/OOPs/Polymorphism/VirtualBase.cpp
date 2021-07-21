#include<bits/stdc++.h>
using namespace std;

/* Virtual base classes are used in virtual inheritance in a way of preventing multiple 
   “instances” of a given class appearing in an inheritance hierarchy when using multiple
    inheritances. */
class A{
    public:
    int a;
    A(){      //constructor
        a = 10;
    }
};

class B : virtual public A{
};

class C : virtual public A{
};

class D : public B, public C{
};

//driven code
int main()
{
    D object;
    cout<<"a = "<<object.a<<endl;
    return 0;
}