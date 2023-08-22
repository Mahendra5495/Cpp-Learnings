// Swap two numbers using pointers.
#include <bits/stdc++.h>
using namespace std;
void swapp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int m, n;
    cout << "Enter values for m and n: ";
    cin >> m >> n;
    cout << "Before swap:- num1: " << m << " num2: " << n << endl;
    swapp(&m, &n);
    cout << "After swap:- num1: " << m << " num2: " << n << endl;
    return 0;
}
