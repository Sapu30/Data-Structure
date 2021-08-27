#include<bits/stdc++.h>
//#include<algorithm> // for all_of()
using namespace std;

int main()
{
	// Initializing array
	int ar[6] = {1, 2, 3, 4, 5, -6};
    int ar1[6];

	// Checking if all elements are positive
	all_of(ar, ar+6, [](int x) { return x>0; })?
		cout << "All are positive elements" :
		cout << "All are not positive elements";
    cout<<endl;

    // Checking if any element is negative
    any_of(ar, ar+6, [](int x) { return x<0; })?
		cout << "There exist a negative element" :
		cout << "All are positive elements";
    cout<<endl;

    // Checking if no element is negative
    none_of(ar, ar+6, [](int x) { return x<0; })?
		cout << "No negative element" :
		cout << "There are negative elements";

    cout<<"New array after copying is: ";
    copy_n(ar, 4, ar1);
    for(int i = 0; i < 4; i++){
        cout<<ar1[i]<<" ";
    }
    cout<<endl;

    cout<<"Assign continuous values to arr: ";
    int ar2[6] = {0};
    iota(ar2, ar2+6, 5);
    for(int i = 0; i < 6; i++){
        cout<<ar2[i]<<" ";
    }
    cout<<endl;


	return 0;

}
