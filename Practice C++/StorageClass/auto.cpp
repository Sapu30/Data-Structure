#include<bits/stdc++.h>
using namespace std;

int main()
{
    //the time for compilation increases slightly 
    //but it does not affect the run time of the program.
    auto a = 10; //No data type declaration needed as compiler already knows
    int b = 20;
    {
        auto a = 15, c = 18;
        printf("%d %d %d \n",a,b,c);
        {
            auto b = 25, d = 30;
            printf("%d %d %d %d\n",a,b,c,d);
        }
        printf("%d %d %d\n",a,b,c);
    }
    printf("%d %d ",a,b);

    return 0;
}

//default value = garbage value