#include<bits/stdc++.h>
using namespace std;

//Function Prototype : A function prototype is a declaration of the function that tells 
//                     the program about the type of the value returned by the function and 
//                     the number and type of arguments.
//syntex : type function-name (arguments);
//int sum(int a, int b);    //--> Acceptable
int sum(int , int);         //--> Acceptable
void g();    //or void g(void);

int main()
{
    int num1, num2;
    cout<<"Enter num1: "<<endl;
    cin>>num1;
    cout<<"Enter num2: "<<endl;
    cin>>num2;
    //num1 & num2 are actual parameters
    cout<<"sum : "<<sum(num1,num2)<<endl;

    g();

    return 0;
}

int sum(int a, int b)     //a & b are formal parameters
{
    //a & b will take values from actual parameters num1 & num2
    int sum = a+b;
    return sum;
}

void g()
{
    cout<<"Hello! I am Sapna.";
}