#include<bits/stdc++.h>
using namespace std;

void swap(char **str1_ptr, char **str2_ptr)
{
    char *temp = *str1_ptr;
    *str1_ptr = *str2_ptr;
    *str2_ptr = temp;
}

int main()
{
    char *str1 = "hlo";
    char *str2 = "world";
    swap(&str1,&str2);
    printf("str1 is %s and str2 is %s", str1, str2);
    getchar();
    
    return 0;
}