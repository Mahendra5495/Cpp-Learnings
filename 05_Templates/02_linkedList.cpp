// Implement a generic linked list class using templates.
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;
    Node(T data, Node<T> *next = nullptr);
};

template <typename T>
class LinkedList {
    Node<T> *head;

   public:
    LinkedList() : head(nullptr) {}
    void insert(T);
    void display();
};

int main() {
    // LinkedList<int> ls;
    // ls.insert(10);
    // ls.insert(20);
    // ls.display();

    LinkedList<string> family;
    family.insert("Grandfather");
    family.insert("Father");
    family.insert("Son");
    family.display();
    return 0;
}
template <typename T>
Node<T>::Node(T data, Node<T> *next) {
    this->data = data;
    this->next = next;
}
template <typename T>
void LinkedList<T>::insert(T data) {
    Node<T> *nn = new Node<T>(data);
    if (!head) {
        head = nn;
        return;
    }
    Node<T> *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = nn;
}
template <typename T>
void LinkedList<T>::display() {
    Node<T> *temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "END" << endl;
}