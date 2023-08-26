// Design a class representing a stack using a private linked list member
#include <bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;

   public:
    // used to initialize new node
    Node(int data, Node* next = nullptr) {
        this->data = data;
        this->next = next;
    }
    friend class Stack;
    // declared as friend class to access private memebers of class Node in
    // class Stack
};
class Stack {
    // points to top of the stack (similar to head in LL)
    Node* topVal;

   public:
    Stack() { topVal = nullptr; }
    int push(int data) {
        Node* node = new Node(data, topVal);
        topVal = node;
        return data;
    }
    int pop() {
        int val = topVal->data;
        topVal = topVal->next;
        return val;
    }
    int top() { return topVal->data; }
    void printStack() {
        while (topVal) {
            cout << pop() << " ";
        }
    }
};
int main() {
    Stack s;
    cout << s.push(10) << " pushed to stack." << endl;
    cout << s.push(20) << " pushed to stack." << endl;
    cout << s.push(30) << " pushed to stack." << endl;
    cout << s.push(40) << " pushed to stack." << endl;
    // cout << s.pop() << " popped out." << endl;
    cout << s.top() << " is current top." << endl;

    cout << "Current stack: ";
    s.printStack();
    cout << endl;
    return 0;
}