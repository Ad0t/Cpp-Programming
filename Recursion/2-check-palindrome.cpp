#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string &s) {
    if (i>= s.size()/2) {
        return true;
    }
    if (s[i] != s[s.size()-1-i]) {
        return false;
    }
    return checkPalindrome(i+1, s);
}

int main () {
    string s;
    cin >> s;
    if (checkPalindrome(0, s)==1) cout << "IS PALINDROME\n";
    else cout << "IS NOT PALINDROME\n";
    return 0;
}