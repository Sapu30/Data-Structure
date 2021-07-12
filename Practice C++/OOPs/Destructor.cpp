#include<bits/stdc++.h>
using namespace std;

//Destructor : 
/*
    Destructor is an instance member function which is invoked automatically whenever 
    an object is going to destroy. Means, a destructor is the last function that is going
    to be called before an object is destroyed.

    *The thing to be noted is that destructor doesn’t destroys an object.   

    Syntax:    ~constructor-name();
*/

//Destructors have same name as the class preceded by a tilde (~) 
//Destructors don’t take any argument and don’t return anything
int i = 0;   //global variable

class Num{
    public:
    Num(){
        i++;
        cout<<"Constructor is called for object no."<<i<<endl;
    }

    //destructor
    ~Num(){
        cout<<"Destructor is called for object no."<<i<<endl;
        i--;
    }
};

//driven code
int main()
{
    cout<<"Main Function"<<endl;
    cout<<"creating 1st obj n1"<<endl;
    Num n1;{
        cout<<"Entering this block:"<<endl;
        cout<<"creating 2 more objects"<<endl;
        Num n2, n3;
        cout<<"exiting this block:"<<endl;
    }  //destructor for n2, n3 called
    cout<<"Back to main"<<endl;
    //destructor for n1 called
    return 0;
}