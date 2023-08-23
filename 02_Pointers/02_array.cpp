// Implement a function to reverse an array in-place using pointers.
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &a) {
    int i = 0, j = a.size() - 1;
    while (i < j) {
        swap(a[i++], a[j--]);
    }
}
void display(vector<int> &a) {
    for (auto i : a) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Before reversing: ";
    display(arr);
    reverseArray(arr);
    cout << "After reversing: ";
    display(arr);

    return 0;
}
