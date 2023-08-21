// Implement a function to check if a given string is a palindrome.
#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string s) {
    string copy = s;
    int i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s[i++], s[j--]);
    }
    if(copy == s)
        return "String is palindrome.";
    return "String is not palindrome.";
}
int main() {
    string st;
    cout << "Enter string to check if its palindrome: ";
    getline(cin, st);
    cout << isPalindrome(st)<<endl;
    return 0;
}