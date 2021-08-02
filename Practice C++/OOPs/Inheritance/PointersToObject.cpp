#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, img;
    public:
       void getData(){
           cout<<"The real part is "<<real<<endl;
           cout<<"The img part is "<<img<<endl;
       }
       void setData(int a, int b){
           real = a;
           img = b;
       }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    //(*ptr).setData(4, 25); is exactly same as
    ptr -> setData(4, 25);
    //(*ptr).getData(); is as good as
    ptr -> getData();
    

    //Array of Objets 
    Complex *ptr1 = new Complex[4];     //array of 4 objects
    ptr1 -> setData(1, 4);
    ptr1 -> getData();

    return 0;
}