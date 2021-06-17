#include <iostream>
using namespace std;

//inline function :  commonly used with classes
//A function definition in a class definition is an inline function definition, 
//even without the use of the inline specifier.
class operation
{
	int a,b,add,sub,mul;
	float div;
    int c = 0;
public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operation :: get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
    
}

inline void operation :: sum()
{
    c = c+1;
    add = a+b+c;
	cout << "Addition of two numbers: " << add << "\n";
}

inline void operation :: difference()
{
	sub = a-b;
	cout << "Difference of two numbers: " << sub << "\n";
}

inline void operation :: product()
{
	mul = a*b;
	cout << "Product of two numbers: " << mul << "\n";
}

inline void operation ::division()
{
	div=a/b;
	cout<<"Division of two numbers: "<<div<<"\n" ;
}

int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}


//should not use : 1. recursion
//                 2. static function
//                 3. loop/switch/goto

//inline is not a command ...it is a request...so complier can ignore inline function...
//The compiler can ignore the inline qualifier in case defined function is more than a line.

/* Advantages :- 
1) It does not require function calling overhead. 2) It also save overhead of variables push/pop on the stack, while function calling. 
3) It also save overhead of return call from a function. 4) It increases locality of reference by utilizing instruction cache.

Disadvantages :-
If somebody used too many inline function resultant in a larger code size than it may cause thrashing in memory. 
More and more number of page fault bringing down your program performance.

It is recommended to always use inline function instead of macro. There are some problems with the use of macros in C++.
Macro cannot access private members of class. Macros looks like function call but they are actually not.

macros are managed by preprocessor and inline functions are managed by C++ compiler.
*/