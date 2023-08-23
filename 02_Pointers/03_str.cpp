// Write a program that takes a string input and replaces all occurrences of a
// given character with another character.
#include <bits/stdc++.h>
using namespace std;

void replaceAll(string &s, char a, char t) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == a) s[i] = t;
    }
}
int main() {
    string sentence;
    cout << "Enter any string or sentence: ";
    getline(cin, sentence);

    char replace, replaceWith;
    cout << "Enter characters (eg replace 'a' with 'x'): ";
    cin >> replace >> replaceWith;

    replaceAll(sentence, replace, replaceWith);
    cout << endl << "Output string: " << sentence;
    return 0;
}