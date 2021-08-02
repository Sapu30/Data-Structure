#include<bits/stdc++.h>
using namespace std;

class Test{
    int a, b;
    public:

    //Test(int i, int j) : a(i), b(j)             //initialization section
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b)   //---->create pb coz a intializes first
    Test(int i, int j) : a(i)
    {
        b = j;
        cout<<"constructor executed"<<endl;
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
    }
};


int main(){
    Test t(4,6);
    return 0;
}