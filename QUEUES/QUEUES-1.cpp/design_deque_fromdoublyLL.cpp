#include <bits/stdc++.h>
using namespace std;
class Node // doubly linkedlist user defined data_type
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Dequeue
{
public:
    Node *head;
    Node *tail;
    int size;
    Dequeue()
    {
        head = tail = NULL;
        size = 0;
    }
    void push_back(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void push_front(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    
    void pop_front()
    {
        if (size == 0)
            cout << "list is empty";
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }
    void pop_back()
    {
        if (size == 0)
        {
            cout << "invalid";
            return;
        }
        else if (size == 1)
        {
            pop_front();
            return;
        }
        else
        {
            Node *temp = tail->prev;
            temp->next = NULL;
            tail = temp;

            size--;
        }
    }
         int size_of_dequeue() {
        return size;
    }
    bool empty()
    {
        if(size==0) return true;
        else return false;
    }
    
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Dequeue q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_back(40);
    q.push_back(50);
   q.display();
   q.pop_back();
    q.display();
   q.pop_front();
   q.display();
    
}