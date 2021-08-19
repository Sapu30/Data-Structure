#include<bits/stdc++.h>
using namespace std;

class Encapsulation{
    // data hidden from outside world
    int x;
    public:
    // function to set value of variable x
    void set(int a){
       x = a;
    }

    // function to return value of variable x
    int get(){
        return x;
    }

    /*  void get(){
            cout<<x;
        }*/
};

//driven code
int main(){
    Encapsulation obj;
    obj.set(7);

    cout<<obj.get();

    //obj.get();

    return 0;
}