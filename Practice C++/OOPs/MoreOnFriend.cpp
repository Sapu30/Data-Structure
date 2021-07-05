#include<bits/stdc++.h>
using namespace std;

//Forward declaration
class Y;

class X{
    int data;
    public:
       void setValue(int value){
           data = value;
       }
    friend void add(X,Y);    //where is Y??.....so give forward declaration
};

class Y{
    int num;
    public:
       void setValue(int value){
           num = value;
       }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"summing data of X & Y objects gives me: "<<o1.data + o2.num;
}



//driven code
int main()
{
    X a1;
    a1.setValue(4);
    
    Y b1;
    b1.setValue(6);

    add(a1, b1);
    return 0;
}