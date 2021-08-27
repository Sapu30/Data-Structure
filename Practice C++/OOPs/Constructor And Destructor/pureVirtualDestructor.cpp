/* if a class contains a pure virtual destructor, it must provide a function body for 
   the pure virtual destructor.       */
   
#include <iostream>
class Base
{
    public:
	   virtual ~Base() = 0; // Pure virtual destructor
};
Base::~Base()
{
	std::cout << "Pure virtual destructor is called";
}

class Derived : public Base
{
public:
	~Derived()
	{
		std::cout << "~Derived() is executed\n";
	}
};

int main()
{
	Base *b = new Derived();
	delete b;
	return 0;
}
