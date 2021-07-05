#include<bits/stdc++.h>
using namespace std;

class c2;

class c1{
    int val1;
    public:
        void intData(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
    friend void swap(c1 &, c2 &);
};

class c2{
    int val2;
    public:
        void intData(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
    friend void swap(c1 &, c2 &);
};

void swap(c1 &x, c2 &y){               //using reference variable
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

//driven code
int main()
{
    c1 obj1;
    c2 obj2;

    obj1.intData(21);
    obj2.intData(67);

    swap(obj1, obj2);

    cout<<"values after swapping: \n";

    cout<<"val1 : ";
    obj1.display();

    cout<<"val2 : ";
    obj2.display();  
    
    return 0;
}


//trick : alt and click where u want same change...and then change at one place only