//  Write a program to concatenate two strings without using any string library
//  functions
#include <bits/stdc++.h>
using namespace std;

char* join(char s1[], char s2[]) {
    int l1 = 0, l2 = 0;

    // calculate lengths of strings
    while (s1[l1] != '\0') l1++;
    while (s2[l2] != '\0') l2++;
    char* res = new char[l1 + l2 + 1];

    // copy s1 to result
    for (int i = 0; i < l1; i++) {
        res[i] = s1[i];
    }

    // copy s2 to result after the chars of s1;
    for (int i = 0; i < l2; i++) {
        res[i + l1] = s2[i];
    }
    res[l1 + l2] = '\0';

    return res;
}
int main() {
    char fname[] = "Mahendra ", lname[] = "Kshirsagar";
    char* result = join(fname, lname);
    cout << fname << endl;
    cout << lname << endl;
    cout << "Concatenation result: " << result;
    delete result;
    return 0;
}