// Implement a template function to perform binary search on an array
#include <bits/stdc++.h>
using namespace std;

bool comparator(double a, double b) { return a < b; }
template <typename T>
int binarySearch(vector<T> &arr, T target) {
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target == arr[mid]) {
            return mid;
        } else if (target < mid) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<double> brr = {5.023, 15.32, 41.315, 56.222, 89.02, 106.25};

    cout << "3 is present at index: " << binarySearch(arr, 3) << endl;

    cout << "89.02 is present at index: " << binarySearch(brr, 89.02) << endl;
    return 0;
}