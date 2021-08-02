#include<bits/stdc++.h>
using namespace std;

//Solve ambiguity in inheritance : using scope resolution operator
class base1{
    public:
      void greet(){
          cout<<"How are you??"<<endl;
      }
};

class base2{
    public:
      void greet(){
          cout<<"Kaise ho aap??"<<endl;
      }
};

class derived : public base1, public base2{
    int a;
    public:
    void greet(){
        base1 :: greet();     //using scope resolution operator (manually)
    }
};

int main()
{
    base1 b1;
    base2 b2;
    derived d;
    b1.greet();
    b2.greet();
    d.greet();
    return 0;
}