#include<bits/stdc++.h>
using namespace std;

//accessed outside of it’s class unless with the help of friend class, 
//the difference is that the class members declared as Protected can be accessed by 
//any subclass(derived class) of that class as well. 


// base class
class Parent
{
	// protected data members : access only by its child/sub class
	protected:
	int id_protected;
	
};

// sub class or derived class from public base class
class Child : public Parent
{
	public:
	void setId(int id)
	{
		
		// Child class is able to access the inherited
		// protected data members of base class
		
		id_protected = id;
		
	}
	
	void displayId()
	{
		cout << "id_protected is: " << id_protected << endl;
	}
};

// main function
int main() {
	
	Child obj1;      //creating object of child class
	
	// member function of the derived class can
	// access the protected data members of the base class
	
	obj1.setId(32);
	obj1.displayId();
	return 0;

}