#include<bits/stdc++.h>
#include<string.h>
#include<stack>
using namespace std;

//Function to reverse the string
void reverse(char *p)
{
    stack<char> s;
    for(int i = 0; i < strlen(p); i++)
        s.push(p[i]);
    
    for(int i = 0; i < strlen(p); i++)
    {
        p[i] = s.top();
        s.pop();
    }
}
//Driver code
int main()
{
    char string[] = "Hello Friends!";

    reverse(string);
    cout<<string;

}