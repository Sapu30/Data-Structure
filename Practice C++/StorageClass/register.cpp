#include <iostream>
using namespace std;

void registerStorageClass()
{

	cout << "Demonstrating register class\n";

	// declaring a register variable
	register char b = 'G';

	// printing the register variable 'b'
	cout << "Value of the variable 'b'"
		<< " declared as register: " << b;
}
int main()
{

	// To demonstrate register Storage Class
	registerStorageClass();
	return 0;
}
