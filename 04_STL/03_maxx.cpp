// Use an iterator to find the maximum element in a list of integers
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {25, 7, 9, 13, 102, 17, 63, 82, 0, 2, 27};
    vector<int>::iterator it = arr.begin();
    int maxx = INT_MIN;
    while (it != arr.end()) {
        if (*it > maxx) {
            maxx = *it;
        }
        it++;
    }

    cout << "Max element: " << maxx << endl;
    return 0;
}
// alternative way to find max using iterator (similar to advance for loop)
// for (auto it : arr) {
//     if (it > maxx) {
//         maxx = it;
//     }
// }