// Write a template function to compute the power of a number
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T pow(T base, int power) {
    if (power < 1)
        return -1;  // if power is negative return -1
    else if (power == 1)
        return base;
    return base * pow(base, power - 1);
}
int main() {
    cout << "5 raised to 3: " << pow(5, 3) << endl;
    cout << "PI(3.1415) squared: " << pow(3.1415, 2) << endl;
    return 0;
}