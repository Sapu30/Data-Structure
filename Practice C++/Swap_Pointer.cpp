#include<bits/stdc++.h>
using namespace std;

//function for swapping
int swap(int *a, int *b)       /*a pointer can be declared as void i.e int a = 10;
                                                                    void* aa = &a; */
{
   int temp;             
   temp = *a;
   *a = *b;
   *b = temp;
}

//Drived code
int main()
{
    int a=8, b=21;
    cout<<"Before swapping : ";
    cout<<a<<" "<<b;
    
    //swap address 
    swap(&a,&b);

    cout<<"\nAfter swapping : ";
    cout<<a<<" "<<b;
    return 0;
}
