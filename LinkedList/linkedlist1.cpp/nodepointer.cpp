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
void display(Node *a)
{
    Node *temp = a;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int size(Node* head)
{
Node *temp=head;
int n=0;
while(temp!=NULL)
{
    temp->next;
    n++;
}
cout<<endl;
}
void display2(Node* head)
{
if(head==NULL) return;
cout<<head->val<<" ";
display2(head->next);
}
void displayreverse(Node* head)
{
    if(head==NULL) return;
    displayreverse(head->next);
cout<<head->val;

}
void insertAtEnd(Node* &head,int  val)

{
    Node *temp=new Node(val);
    while(head!=NULL)
    {
        head=head->next;
    }
head->next=temp;
temp->next=NULL;
}
void INSERTATEND(Node* &head, int val)
{
    Node* t = new Node(val);
    Node* temp=head;
    if (temp==NULL) {
        head = t; 
        t->next=NULL; // If the list is empty, make the new node the head
        return;
    }
    else{
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = t;
    t->next = NULL;}
}

int main()
{
Node *a = new Node(10);
Node *b = new Node(20);
Node *c = new Node(30);
Node *d = new Node(40);
a->next=b;
b->next=c;
c->next=d;
display(a);
display2(a);
cout<<size(a);
displayreverse(a);
insertAtEnd(a,600);
display2(a);

INSERTATEND(a,90);
display(a);
}