// Implement a priority queue using the `std::priority_queue` container
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 2, 5, 8, 12, 16, 1, 3};
    priority_queue<int> q;
    cout << "Array: ";
    for (auto it : arr) {
        cout << it << " ";
        q.push(it);
    }

    cout << endl << "Priority queue: ";
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}