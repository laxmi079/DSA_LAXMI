#include <iostream>
using namespace std;

class Queue {
public:
    int f;
    int b;
    int arr[5];

    Queue() {
        f = 0;
        b = 0;
    }

    void push(int val) {
        if (b == 5) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[b] = val;
        b++;
    }

    void pop() {
        if (f == b) {
            cout << "Queue is empty" << endl;
            return;
        }
        f++;
    }

    int size() {
        return b - f;
    }

    int front() {
        if (f == b) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    int back() {
        if (f == b) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[b - 1];
    }

    bool empty() {
        return f == b;
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = f; i < b; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.pop();
    q.display();
    return 0;
}
