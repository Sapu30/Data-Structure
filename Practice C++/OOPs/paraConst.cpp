#include<bits/stdc++.h>
#include<cmath>
using namespace std;

class Point{
    int x , y;
   
    //Creating a Constructor 
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }       //constructor declaration 

        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl; 
        }

        friend void distance(Point, Point);
};

void distance(Point p1, Point p2){
    double dis = sqrt(pow((p1.x-p2.x),2) + pow((p1.y - p2.y),2));
    cout<<"The distance b/t 2 points are: "<<dis<<endl;
}

//driver code
int main()
{
    //implicit call
    Point p(1,1);      //automatically invoked when object is created
    p.displayPoint();

    //explicit call
    Point q = Point(5,7);
    q.displayPoint();

    distance(p,q);


    return 0;
}
