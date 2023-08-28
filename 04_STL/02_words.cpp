// Implement a program that counts the occurrences of words in a string using a
// map.
#include <bits/stdc++.h>
using namespace std;

// convert to lowercase and remove any special characters.
void cleanString(string &s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 97 || s[i] > 122) {
            if (s[i] == 32) continue;
            s[i] = 0;
        }
    }
}

int main() {
    string text, temp;
    vector<string> words;
    map<string, int> count;

    // get string input
    getline(cin, text);

    cleanString(text);

    // create a stream
    stringstream s(text);

    // split string using space
    while (getline(s, temp, ' ')) {
        words.push_back(temp);
    }

    for (auto it : words) {
        // increment count if word exist
        if (count.find(it) != count.end()) {
            count[it]++;
            continue;
        }
        // set count of word to 1 if word is not in map
        count[it] = 1;
    }

    cout << endl << "Word and its occurrence count" << endl;
    for (auto it : count) {
        cout << it.first << ": " << it.second << endl;
    }
    return 0;
}