#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
this->val=val;
this->next=NULL;
    }
};
class Stack
{
    public:
    Node* head;
    int size;
    Stack()
    {
        size=0;
        head=NULL;
    }
  void push(int val)
  {
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
  }  
  void pop()
  {
    if(head==NULL) cout<<"empty stack";
    else head=head->next;
  }
    
Stack ()
{
    head=NULL;
}

};
int main()
{
    Stack st;
    st.push(7);
    st.push(2);
    st.push(5);
    st.push(4);
    display(st);
}