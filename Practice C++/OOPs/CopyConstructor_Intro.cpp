/* COPY CONSTRUCTOR :
    A copy constructor is a member function that initializes an object using 
    another object of the same class.

    SYNTEX :   ClassName (const ClassName &old_obj); 
*/

#include<bits/stdc++.h>
using namespace std;

class Point{
    int x, y;
    public:
       Point(int x1, int y1)      //Normal constructor
       {
           x = x1;
           y = y1;
       }

       Point(Point &p)
       {
           x = p.x;
           y = p.y;
       }

       int getx() {return x;}
       int gety() {return y;}
};

//driven code
int main()
{
    Point p1(12, 3);    //Normal constructor called here
 
    Point p2 = p1;      //copy constructor called here

    cout<<"p1.x = "<<p1.getx()<<" p1.y = "<<p1.gety()<<endl;
    cout<<"p2.x = "<<p2.getx()<<" p2.y = "<<p2.gety()<<endl;

    return 0;


}





/* When is  copy constructor called? 
  In C++, a Copy Constructor may be called in the following cases: 
   1. When an object of the class is returned by value. 
   2. When an object of the class is passed (to a function) by value as an argument. 
   3. When an object is constructed based on another object of the same class. 
   4. When the compiler generates a temporary object. */


/* 1. Can we make copy constructor private? 
   Yes, a copy constructor can be made private. When we make a copy constructor private 
   in a class, objects of that class become non-copyable. This is particularly useful 
   when our class has pointers or dynamically allocated resources. 
   In such situations, we can either write our own copy constructor like above String 
   example or make a private copy constructor so that users get compiler errors rather 
   than surprises at runtime. 



   2. Why argument to a copy constructor must be passed as a reference? 
    A copy constructor is called when an object is passed by value. Copy constructor 
    itself is a function. So if we pass an argument by value in a copy constructor, 
    a call to copy constructor would be made to call copy constructor which becomes a
    non-terminating chain of calls. Therefore compiler doesn’t allow parameters to be
    passed by value.

*/