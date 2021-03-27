#include<bits/stdc++.h>
using namespace std;

//function to count string i.e 1010011 = 5(n0. of times 0 & 1 comes together)
int count(string s)
{
    int str[2] = {0}; //binary string
    int res = 0;
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        int num = s[i] - '0';
        if(i==0 || s[i]!=s[i-1])
           str[num] = 0;
        str[num]++;
        if(str[num] <= str[1-num])
          res++;
    }
    return res;
}
//Driver code
int main()
{
    string s;
    cout<<"s=";
    cin>>s;
    cout<<count(s);
    return 0;

}

/*
  Explanation :
  string : "1010011"
  combination : '10','01','10','0011','01' 
  hence total no. of combination = 5
  */