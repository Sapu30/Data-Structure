#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int val, rev = 0, rem;
    val = x;
    while(x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    if(val == rev)
      return true;
    else 
      return false;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}