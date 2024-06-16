#include <iostream>
#include <vector>
using namespace std;

class Queue {
public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val) {
        f = 0;
        b = 0;
        s=0;
        vector<int> v(val);
        arr=v;
    }

    void push(int val) {
        if (b == arr.size()) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }

    void pop() {
        if (f == b) {
            cout << "Queue is empty" << endl;
            return;
        }
        f++;
        s--;
    }

    int size() {
        return s;
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
    Queue q(5); //size is 5
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.pop();
    q.display();
cout<<q.size();    
}
