//  Implement a function to find the length of a null-terminated string using
//  pointers.
#include <bits/stdc++.h>
using namespace std;

int length(char s[]) {
    int x = 0;
    char c = ' ';
    while (c != '\0') {
        c = s[x];
        x++;
    }
    return x - 1;
}

int main() {
    char name[] = "Mahendra Bhau";
    cout << name << endl;
    cout << "Length of string is: " << length(name);
    return 0;
}