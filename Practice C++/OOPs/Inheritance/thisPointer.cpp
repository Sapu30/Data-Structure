#include<bits/stdc++.h>
using namespace std;

class A{
    int a; 
    public:
        A & setData(int a){
           //this is a keyword which is a pointer, 
           //points to the object which invokes the member function
           this -> a = a;      //having same variable a
           return *this;
       }
       void getData(){
           cout<<"The value of a is "<<a<<endl;
       }
};

int main(){
    A a;
    a.setData(7).getData();

    return 0;
}