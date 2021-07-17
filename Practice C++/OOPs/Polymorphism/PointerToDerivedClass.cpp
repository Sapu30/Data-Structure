#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    int var;
    void display(){
        cout<<"Display Base class variable: "<<var<<endl;
    }

};

class Derived : public Base{
    public:
    int var1;
    void display(){
        cout<<"Display Base class variable: "<<var<<endl;
        cout<<"Display Derived class variable var1: "<<var1<<endl;
    }

};

//deriven code
int main()
{
    Base *bptr;
    Base b;
    Derived d;

    bptr = &d;    //Pointing to derived class

    bptr -> var = 43;
    //bptr -> var1 = 57;    //error 
    bptr -> display();   //display base class (Late binding)
 
    Derived *dptr;
    dptr = &d;

    dptr -> var = 92;
    dptr -> var1 = 72;
    dptr -> display();
    return 0;
}