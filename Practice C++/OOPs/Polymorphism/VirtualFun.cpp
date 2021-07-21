#include<bits/stdc++.h>
using namespace std;

//Virtual Function : perform dynamic linkage / late binding
class Base{
    public:
    int var = 1;
    virtual void display(){
        cout<<"1. Display Base class variable: "<<var<<endl;
    }
};

class Derived : public Base{
    public:
    int var1 = 2;
    void display(){
        cout<<"2. Display Base class variable: "<<var<<endl;
        cout<<"2. Display Derived class variable var1: "<<var1<<endl;
    }
};

//deriven code
int main()
{
    Base *bptr;
    Base obj_base;
    Derived obj_derived;

    bptr = &obj_derived;          //pointer of base class point object of derived class
    bptr -> display();
    return 0;
}