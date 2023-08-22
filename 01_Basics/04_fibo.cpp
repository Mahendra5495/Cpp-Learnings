// Implement a function to generate Fibonacci numbers up to a specified limit.
#include <bits/stdc++.h>
using namespace std;

vector<long> fibo(int n) {
    vector<long> ans = {0, 1};
    long f = 0, s = 1, next = 0;
    for (int i = 2; i < n; i++) {
        next = f + s;
        ans.push_back(next);
        f = s;
        s = next;
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter limit to generate fibonacci numbers: ";
    cin >> n;
    vector<long> ans = fibo(n);
    cout << "Fibonacci series: ";
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}