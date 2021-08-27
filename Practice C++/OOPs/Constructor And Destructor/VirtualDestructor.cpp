/* CPP program without virtual destructor
   causing undefined behavior  : destruction of derived class will not called  */


#include<bits/stdc++.h>
using namespace std;

/* virtual destructor : 
    Deleting a derived class object using a pointer of base class type that has a 
    non-virtual destructor results in undefined behavior. 
    To correct this situation, the base class should be defined with a virtual destructor           
*/

class base {
    public:
        //base class
	    base(){
        cout<<"Constructing base \n"; }
	    virtual ~base(){                //virtual keyword use for virtual destructor
        cout<<"Destructing base \n"; }	
};

class derived: public base {                 //derived class
    public:
	    derived(){ 
        cout<<"Constructing derived \n"; }
	    ~derived(){ 
        cout<<"Destructing derived \n"; }
};


//driven code
int main(void)
{
    derived *d = new derived();
    base *b = d;
    delete b;
    getchar();
    return 0;
}

/* Note :
    Any time you have a virtual function in a class, you should immediately add a 
    virtual destructor (even if it does nothing).
*/