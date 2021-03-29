#include<bits/stdc++.h>
using namespace std;

//Check if string is palindrome or not
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    //if index value of last char is > than index value of first char
    if(h > l)
    {
        if(str[l++] != str[h--])
          cout<<str<<" is not palindrome"<<endl;
        else
           cout<<str<<" is palindrome"<<endl;
    }
    
}

//Driver code
int main()
{
    isPalindrome("naman");
    isPalindrome("Naina");
    isPalindrome("nayan");
    
    return 0;
}