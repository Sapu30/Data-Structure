#include<bits/stdc++.h>
using namespace std;

int main()
{
    int marks[] = {53, 89, 34, 98, 63};

    for(int i = 0; i < 5; i++)
    {
        cout<<"Marks: "<<marks[i]<<endl;
    }
    int *p = marks;
    cout<<*(p++)<<"\n";
    cout<<*++p;
    // cout<<"The value of marks 0 is: "<<*p<<endl;
    // cout<<"The value of marks 1 is: "<<*(p+1)<<endl;
    // cout<<"The value of marks 4 is: "<<*(p+4)<<endl;
    



    return 0;
}
