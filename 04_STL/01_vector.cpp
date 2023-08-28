// Use a vector to implement a dynamic array and perform insertions and
// deletions
#include <bits/stdc++.h>
using namespace std;

class Vector {
    vector<double> arr;
    int size = 0;

   public:
    void insert(int val) {
        arr.push_back(val);
        size++;
    }
    void insert(int, int);
    void delete_element(int);
    void display();
    int getSize() { return size; }
};
int main() {
    Vector nums;
    nums.insert(10);
    nums.insert(30);
    nums.insert(40);
    nums.insert(50);
    nums.insert(600);
    nums.delete_element(4);
    nums.display();
    return 0;
}

void Vector::insert(int val, int idx) {
    if (size == idx) {
        insert(val);
        return;
    }
    double x = arr[size - 1];  // store last element;
    for (int i = size - 2; i >= idx; i--) {
        arr[i + 1] = arr[i];
    }
    arr[idx] = val;
    size++;
    arr.push_back(x);
}
void Vector::delete_element(int idx) {
    size--;
    if (idx == size) {
        arr.pop_back();
        return;
    }
    for (int i = idx + 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    arr.pop_back();
}
void Vector::display() {
    for (auto it : arr) {
        cout << it << " ";
    }
}