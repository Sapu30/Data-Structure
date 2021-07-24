#include<bits/stdc++.h>
using namespace std;

//Base Class 1
class A{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void); 
};

void A :: set_roll_number(int r){
    roll_number = r;
}

void A :: get_roll_number(){
    cout<<"The  roll no. is : "<<roll_number<<endl;
}

//Child Class 1 : inherit properties from Base Class
class B : public A{
    protected:
        float maths;
        float science;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void B :: set_marks(float m1, float m2){
    maths = m1;
    science = m2;
}

void B :: get_marks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in sience are: "<<science<<endl;
}

//Child Class 2 : inherit properties of Base Class and Child Class 1
class C : public B{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is: "<<(maths + science)/2<<endl;
        }
};

//driven code
int main(){
    C rishi;
    rishi.set_roll_number(50);
    rishi.set_marks(90.0, 88.0);
    rishi.display();
    return 0;
}