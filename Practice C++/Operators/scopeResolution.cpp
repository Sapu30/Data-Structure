#include<bits/stdc++.h>
using namespace std;

//1. To access a global variable when there is a local variable with same name:
int val = 10;

//2. To define a function outside a class.

class A{
    public:
      void func();   //declaration only
};

void A :: func()
{
    cout<<"\nfunc() is called"<<"\n";
}


//3. To access a class’s static variables.

class Test{
    static int x;
    public:
       static int y;

      
    void fun(int x)
    {
        cout<<"\nValue of static x: "<<Test :: x<<"\n";
        cout<<"value of local x: "<<x<<"\n";
    }

};

int Test :: x = 1;
int Test :: y = 2;


//4. In case of multiple Inheritance:

class X{
    protected:
      int m;
    public:
      X() {m = 11;}
};

class Y{
    protected:
      int m;
    public:
      Y() {m = 22;}
};

class Z : public X, public Y{
    public:
      void fun1()
      {
          cout<<"\n\nX's m is "<<X::m;
          cout<<"\nY's m is "<<Y::m;
      }
};



//Driven Code
int main()
{
    //1. To access a global variable when there is a local variable with same name:
    int val = 20;
    cout<<"Value of local x is "<<val<<"\n";
    cout<<"Value of global x is "<<::val<<"\n";

    //2. To define a function outside a class.
    A a;
    a.func();


    //3. To access a class’s static variables.
    Test obj;
    int x = 10;
    obj.fun(x);

    cout<<"\nValue of y: "<<Test :: y;

    //4. In case of multiple Inheritance:
    Z z;
    z.fun1();

    return 0;

}