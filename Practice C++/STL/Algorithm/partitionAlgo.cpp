#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm> // for partition algorithm
// #include<vector> // for vector
using namespace std;

int main()
{
	// Initializing vector
	vector<int> vect = { 2, 1, 5, 6, 8, 7 };
	
	// Checking if vector is partitioned
	// using is_partitioned()
	is_partitioned(vect.begin(), vect.end(), [](int x){
		return x%2==0;}) ? cout << "Vector is partitioned" :
        cout << "Vector is not partitioned";
	cout << endl;
	
	//partitioning vector using partition()
	partition(vect.begin(), vect.end(), [](int x){
		return x%2==0;});
	
	// Checking if vector is partitioned
	// using is_partitioned()
	is_partitioned(vect.begin(), vect.end(), [](int x){
		return x%2==0;}) ?
        cout << "Now, vector is partitioned after partition operation" : cout << "Vector is still not partitioned after partition operation";
	cout << endl;
	
	//Displaying partitioned Vector
	cout << "The partitioned vector is : ";
	for (int &x : vect) cout << x << " ";
    cout<<endl;


    vector<int> v = { 2, 10, 25, 6, 18, 7 };
	vector<int> :: iterator it1;      //Declaring iterator
	
    //stable partition vector      ---->   partition in the same/relative manner
    stable_partition(v.begin(), v.end(), [](int x){
        return x%2 == 0;});
     
    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : v) cout << x << " ";
    cout << endl;

    //partition point 
	auto it = partition_point(v.begin(), v.end(), [](int x) {
		return x % 2 == 0;
	});

	cout<<"The vector element returning true for condition are: ";
	for(it1 = v.begin(); it1 != it; it1++)
		cout<<*it1<<" ";
	cout<<endl;
    
	//partition copy
	vector<int> v1, v2;

	//resizing vector to suitable size --- using count_if() & resize()
	int n = count_if(v.begin(), v.end(), [](int x){
		return x % 2 == 0;
	});
	v1.resize(n);
	v2.resize(v.size() - n);

	//copy partition
	partition_copy(v.begin(), v.end(), v1.begin(), v2.begin(),[](int x){
		return x % 2 == 0;
	});

	//displaying
	cout<<"elelments return true for cond: ";    //if elements are even(satisfy the cond) copy in v1 
	for(int &x : v1)           
	    cout<<x<<" ";
    cout<<endl;

	cout<<"elements return false for cond: ";     //if elements are odd(not satisfy the cond) copy in v2
	for(int &x : v2)
	    cout<<x<<" ";
    cout<<endl;
	
	return 0;
	
}


