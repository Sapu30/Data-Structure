#include<bits/stdc++.h>
using namespace std;

class Simple{
    int data1, data2;
    public:
        Simple(int a, int b = 9)
        {
            data1 = a;
            data2 = b;
        }
        void printData();
};

void Simple :: printData(){
    cout<<"The value of data are: "<<data1<<" & "<<data2<<endl;
}
       

//driver code
int main()
{
   Simple s1(5);
   s1.printData();

   return 0; 
}


