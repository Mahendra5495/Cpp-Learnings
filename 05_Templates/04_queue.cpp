// Create a generic queue class using templates
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
class Queue {
    Node<T> *front, *rear;

   public:
    Queue() : front(nullptr), rear(nullptr) {}
    void enqueue(T data);
    T dequeue();
    void display();
};
int main() {
    // Queue<int> qu;
    // qu.enqueue(12);
    // qu.enqueue(125);
    // qu.enqueue(120);
    // cout << qu.dequeue() << " removed" << endl;
    // qu.display();

    Queue<string> ticketLine;
    ticketLine.enqueue("Raj");
    ticketLine.enqueue("Sanju");
    ticketLine.enqueue("Ankit");
    ticketLine.enqueue("Sam");
    cout << ticketLine.dequeue() << " received the ticket." << endl;
    cout << "Remaining memebers in queue: ";
    ticketLine.display();

    return 0;
}
template <typename T>
Node<T>::Node(T data, Node<T> *next) {
    this->data = data;
    this->next = next;
}
template <typename T>
void Queue<T>::enqueue(T data) {
    Node<T> *nn = new Node<T>(data);
    if (!front) {
        front = rear = nn;
        return;
    }
    rear->next = nn;
    rear = nn;
}
template <typename T>
T Queue<T>::dequeue() {
    Node<T> *removed = front;
    front = front->next;
    T val = removed->data;
    delete removed;
    return val;
}
template <typename T>
void Queue<T>::display() {
    while (front) {
        cout << dequeue() << " ";
    }
}