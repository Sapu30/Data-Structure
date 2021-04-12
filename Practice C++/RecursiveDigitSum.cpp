#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
// Complete the superDigit function below.
int superDigit(string n, int k) {
    if(n.size() == 1)
       return stoi(n);   //Converting string to number
    long long sum = 0;
    for(int i = 0; i < n.size(); i++)
    {
        sum += (n[i] - '0')*k;     //'0' is necessary to avoid sregmentation fault
    }
       return superDigit(to_string(sum),1);  //if digit > 10 then call the function again

}

int main()
{
    string n;
    int k;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter k:";
    cin>>k;

    cout<<superDigit(n,k);

    return 0;


}

/* expression : 
  Here  n = 123 and k = 3, so p = 123123123.

super_digit(P) = super_digit(123123123) 
               = super_digit(1+2+3+1+2+3+1+2+3)
               = super_digit(18)
               = super_digit(1+8)
               = super_digit(9)
               = 9
*/