#include<bits/stdc++.h>
using namespace std;

class Temp
{
public:

    virtual ~Temp()
    {
    }
    virtual void myVirtualFunction() const
    {
        cout<<"Temp::myVirtualFunction"<<endl;
    }

};

class TempDerived : public Temp
{
public:

    void myVirtualFunction() const
    {
        cout<<"TempDerived::myVirtualFunction"<<endl;
    }

};


int main(void) 
{
    TempDerived aDerivedObj;
    //Compiler thinks it's safe to expand the virtual functions
    aDerivedObj.myVirtualFunction();

    //type of object Temp points to is always known;
    //does compiler still expand virtual functions?
    //I doubt compiler would be this much intelligent!
    Temp* pTemp = &aDerivedObj;
    pTemp->myVirtualFunction();

    return 0;
}