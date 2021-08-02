#include<bits/stdc++.h>
using namespace std;

/*
case 1:
class B : public A{
    //order of execution of constructor -> first A() then B()  (base then derived)
}

case 2:
class A : public B, public C{
    //order of execution of constructor -> first B() then C() & then  A() (B & C are base)
};

case 3:
class A : public B, virtual public C{
    //order of execution of constructor -> C(), B() then A() (virtual base, non-virtual base, derived) 
};

*/

class Base1{
    int data1;
    public:
        Base1(int i){        //base class constructor
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        } 
        void printData1(void){
            cout<<"The value of data1 is : "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){        //base class constructor
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        } 
        void printData2(void){
            cout<<"The value of data2 is : "<<data2<<endl;
        }
};

class Derived : public Base1, virtual public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){ //derived class constructor
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printData(void){
            cout<<"The value of derived1  is : "<<derived1<<endl;
            cout<<"The value of derived2  is : "<<derived2<<endl;
        }
};

int main(){
    Derived d(1,2,3,4);
    d.printData1();
    d.printData2();
    d.printData();
    return 0;
}