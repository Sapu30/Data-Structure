#include<bits/stdc++.h>
using namespace std;

//Solve ambiguity (copied value) in inheritance : using virtual base class
//Also known as Dimond problem, multipath problem (special case of hybrid inheritance)
//    1. using  scope pointer 
//    2. using virtual base class

//here compiler will decide that through which derived class of Student....result classuse the function
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no = a;
        }
        void print_number(void)
        {
            cout<<"your roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{      //virtual 
    protected:
    float maths, science;
    public:
       void set_marks(float m1, float m2)
       {
           maths = m1;
           science = m2;
       }
       void print_marks(void)
       {
           cout<<"Your marks is : "<<endl
               <<"Maths : "<<maths<<endl
               <<"Science : "<<science<<endl;
       }
};

class Sports : virtual public Student{      //virtual
    protected:   
       float score;
    public:
       void set_score(float sc)
       {
           score = sc;
       }
        void print_score(void)
       {
           cout<<"Your PT score is : "<<score<<endl;
       }
};

class Result : public Test, public Sports{
    private:
       float total;
    public:
       void display(void)
       {
           total = maths + science + score;
           print_number();
           print_marks();
           print_score();
           cout<<"Your total score is : "<<total<<endl;
       }
};

//driven code
int main()
{
    Result res;
    res.set_number(50);
    res.set_marks(88, 95);
    res.set_score(8);
    res.display();
    return 0;
}