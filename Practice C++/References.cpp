#include<iostream>
using namespace std;

int main()
{
int x = 10;

// address of x
int &ref = x;
cout << "ref = " << &ref << endl ;

// Value of x is now changed to 20 
ref = 20;
//hence print x = 20 
cout << "x = " << x << endl ;
cout << "ref = " << &ref << endl ;

// Value of x is now changed to 30
x = 30;
//hence print x = 30
cout << "ref = " << ref << endl ;
cout << "ref = " << &ref << endl ;

return 0;
}

/*Note : Each time we change the value of x means data 
not the address....here we changing the data or value of x 
again & again but not the address...we are storing the data 
at the same address by replacing the previous one.*/
