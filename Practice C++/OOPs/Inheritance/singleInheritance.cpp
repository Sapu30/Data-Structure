#include<bits/stdc++.h>
using namespace std;

class Base{
    int data1;                //pvt by default and is not inheritable
    public:
       int data2;
       void setData();
       int getData1();
       int getData2();
};

/*  Syntax: 
class subclass_name : access_mode base_class
{
  //body of subclass
};
*/
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
       void process();
       void display();
};

void Derived :: process(){
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<getData2()<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}

//deriven code
int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}