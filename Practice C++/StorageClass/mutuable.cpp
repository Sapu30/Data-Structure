#include<bits/stdc++.h>
using namespace std;

class test
{ 
    public:
       int x;
       mutable int y;     //value of y is changeable even it is a part of const object

       test()
       {
           x = 6;
           y = 9;
       }
};

int main()
{
    const test t1;     //const object
    //t1.x = 67;      //throw error because x is a part of const and can't be change
    t1.y = 72;  
    t1.y = 97;      //modify its value because of mutable keyword
    cout<<t1.x<<" "<<t1.y;

    cout<<endl;

    test t2;            //just an ordinary object and values can change
    t2.x = 27;
    t2.y = 71;
    t2.x = 8;

    cout<<t2.x<<" "<<t2.y;

    return 0;
}

