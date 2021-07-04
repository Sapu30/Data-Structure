#include<bits/stdc++.h>
using namespace std;

//define class
class myname
{
    //access specifier
    public:
    //data members
    string name;
    //member funtions
    void printName()
    {
        cout<<"My name is : "<<name;
    }
};

//driven code
int main()
{
    //creating object of class myname
    myname obj1;
    //access data members
    obj1.name = "sapna";
    //access members functions
    obj1.printName();

    return 0;
}

