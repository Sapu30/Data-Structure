#include<bits/stdc++.h>
using namespace std;

//function to check parantheses  
int isValid(string s) 
    {
        stack<char> st;  //stack to store string value of parantheses 
        if(s.length()%2) return 0;   //even no. of parantheses should be present
        for(int i=0;i<s.length();i++) 
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') 
            {
                st.push(s[i]);    //put parantheses in stack one by one
            }
            else if(st.empty())   //if string is empty
                return false;
            else {
                char t = st.top();       //pop paratheses one by one & check for each condition
                if(s[i]==')' && t!= '(' ) return 0;
                if(s[i]==']' && t!= '[' ) return 0;
                if(s[i]=='}' && t!= '{' ) return 0;
                else 
                    st.pop();
            }
        }
        return st.empty();
};

int main()
{
    string s;
    cout<<"s=";
    cin>>s;
    cout<<isValid(s);
    return 0;
}