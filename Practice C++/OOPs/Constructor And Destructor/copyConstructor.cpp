#include<bits/stdc++.h>
using namespace std;

class Number{
    int a;
    public:
      Number(){            //need a default constructor
          a = 0;           //put a = 0...otherwise it would take any default value
      } 


     //When no copy constructor is found, compiler supplies its own copy constructor to each class
      Number(Number &obj)
      {
        cout<<"copy constructor called :"<<endl;
        a = obj.a;
      }
                 
      Number(int num)
      {
        a = num;
      }

      void display(){
        cout<<"The number for this object is "<< a <<endl;
      }
};

//driven code
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(x);   //Copy constructor invoked
    z1.display();

    z2 = z;       //copy constructor not called  (because z2 already created above)
    z2.display();

    Number z3 = z;   //copy constructor called (because object is created here itself)
    z3.display();
    return 0;


    //z1 should exactly resemble z or x or y
}