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
class dll
{
public:
    Node *head;
    Node *tail;
    int size;
    dll()
    {
        head = tail = NULL;
        size = 0;
    }
    void inserattail(int val)
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
    void insertathead(int val)
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
    void inertatidx(int idx, int val)
    {
        Node *t = new Node(val);
        Node *temp = head;
        for (int i = 1; i <= idx - 1; i++)
        {
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        t->prev = temp;
        t->next->prev = t;
        size++;
    }
    void deleteathead()
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
    void deleteattail()
    {
        if (size == 0)
        {
            cout << "invalid";
            return;
        }
        else if (size == 1)
        {
            deleteathead();
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
    void deleteatidx(int idx)
    {
        if (size == 0)
        {
            cout << "list is empty";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "invalid idx";
            return;
        }
        else if (idx == 0)
            deleteathead();
        else if (idx == size - 1)
            deleteattail();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }
    int getatidx(int idx)
    {
        if (size == 0)
        {
            cout << "list is empty";
            return -1;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "invalid idx";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            if (idx < (size / 2))
            {
                Node *temp = head;
                for (int i = 1; i <= idx; i++)
                {
                    temp = temp->next;
                }
                return temp->val;
            }
            else // idx>size/2
            {
                Node *temp = tail;
                for (int i = 1; i < size - idx; i++)
                {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
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
void displayrev(Node *tail)
{
    Node *temp = tail;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    // 10 20 30 40 50
    dll list;
    list.inserattail(10);
    list.display();
    list.inserattail(20);
    list.inserattail(40);
    list.display();
    list.insertathead(55);
    list.display();
    list.inertatidx(2, 80);
    list.display();
    list.deleteathead();
    list.display();
    // list.deleteattail();
    // list.display();
    // list.deleteatidx(1);
    // list.display();
    cout << list.getatidx(2) << endl;
}
// doubl linked list has a previous node as well as a next node, so while amaking connections keep in mind to make prev connections while making next connections , 
// here  all the functions are almost same , only differnce is th eorevious node 