// Create a template function to find the minimum of two values of any data type
#include <bits/stdc++.h>
using namespace std;
template <typename T>
T getMin(T x, T y) {
    return (x < y) ? x : y;
}

int main() {
    cout << "Minimum (int): " << getMin(21, 5) << endl;
    cout << "Minimum (double): " << getMin(104.254125, 105.0) << endl;
    return 0;
}
