// Calculate the factorial of a number using recursion.
#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main() {
    long num;
    cout << "Enter number to calculate factorial: ";
    cin >> num;
    cout << num << "! = " << fact(num) << endl;
    return 0;
}
