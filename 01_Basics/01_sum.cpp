// Write a program to calculate the sum of all even numbers within a given
// range.
#include <bits/stdc++.h>
using namespace std;

int main() {
    long sum = 0;
    int lower, upper;
    cout << "Enter lower and upper bound for sum: ";
    cin >> lower >> upper;
    for (int i = lower; i <= upper; i++) {
        if (i % 2) continue;
        sum += i;
    }
    cout << "Sum of even numbers between " << lower << " and " << upper
         << " is: " << sum << endl;
    return 0;
}