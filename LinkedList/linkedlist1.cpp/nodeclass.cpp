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
    }
};
int main()
{
Node a(10);
Node b(20);
Node c(30);
Node d(50);
a.next=&b;
b.next=&c;
c.next=&d;
// cout<<a.next->val<<endl;
// cout<<(((a.next)->next)->next)->val;
Node temp=a;
while(1)
{
    cout<<temp.val<<endl;
    if(temp.next==NULL) break;
    temp = *(temp.next);
}
}