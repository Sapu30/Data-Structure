#include<bits/stdc++.h>
using namespace std;
int x = 9;

void externStorageClass()
{
    cout<<"Extern Storage Class \n";
    
    extern int x;
    cout<<"value of variable x: "<<x<<"\n";

    x = 6;
    cout<<"Modified value of variable x: "<<x<<"\n";

}

int main()
{
    cout<<"Before calling: "<<x<<"\n";
    
    externStorageClass();

    cout<<"After Calling: "<<x<<"\n";
    
    return 0;
}