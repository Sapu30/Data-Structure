#include<bits/stdc++.h>
using namespace std;

//Dynamically initilization of object : at run time

class BankDeposit
{
    int principal, years;
    float interestRate, returnValue;

    public:
       BankDeposit(){}                  //necessary
       BankDeposit(int p, int y, float r);   // r can be value like 0.04
       BankDeposit(int p, int y, int r);     //r can be value like 10, 20 ...etc

       void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); 
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); 
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<endl
    <<"Return value after "<<years
    <<" years is "<<returnValue<<endl;
}

//driven code
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout<<"Enter value of p, y & r: "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();


    cout<<"\nEnter value of p, y & R: "<<endl;
    cin>>p>>y>>R;
    bd1 = BankDeposit(p,y,R);
    bd1.show();

    return 0;
}