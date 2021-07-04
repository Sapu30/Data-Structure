#include<bits/stdc++.h>
using namespace std;


//diff b/w public and pvt
class circle{

    private:             
        double radius;        //access with in a class only

    public:
        void cal_area(double r)         //access outside of class as well
        {
            radius = r;
            double area = 3.14*r*r;      

            cout<<"Radius: "<<radius<<endl;
            cout<<"Area: "<<area;
        }

};

//driven code
int main(){
    circle c;          //object c is created of class circle
    c.cal_area(2);      //call the function which is public in class

    /*cout<<"radius : "<<c.radius;*/         //can not access because radius is pvt

    return 0;
}