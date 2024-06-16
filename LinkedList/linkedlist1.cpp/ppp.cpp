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
class LinkedList 
{ public:
    Node* head;
    Node* tail;
    int size=0;
    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }
 void inert_At_tail(int val)
 {
    Node* temp=new Node(val);
   if(size==0) head=tail=temp;
   else{
    tail->next=temp;
    tail=temp;
   }
   size++;
 }
 void inert_At_head(int val)
 {
   Node* temp=new Node(val);
   if(size==0) head=tail=temp;
   else
   {
    temp->next=head;
    head=temp;
   }
   size++;
 }
 void insertatidx(int idx,int val)
 {
    
    if(idx<0 || idx>size) 
    {
        cout<<"invalid";
        return;
    }
    else if(idx==0) inert_At_head(val);
    else if(idx==size) inert_At_tail(val);
    else{
     Node* t=new Node(val);
     Node* temp=head;
     for(int i=1;i<=idx-1;i++)
     {
        temp=temp->next;
     }
     t->next=temp->next;
     temp->next=t;
     size++;
    }
 }
int getat(int idx)
{
    if(idx<0 || idx>=size) return -1;
    if(idx==0) return head->val;
    if(idx==size-1) return tail->val;
    else{
        Node* temp=head;
        for(int i=1;i<=idx;i++)
        {
            temp=temp->next;
        }
    return temp->val;
    }
}
void deleteathead()
{
if(size==0) cout<<"empty list";
head=head->next;
size--;
}
void deleteattail()
{
  if(size==0) cout<<"empty list";
  else{
    Node* temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
  }
}
void deleteatidx(int idx)
{
    if(size==0) cout<<"empty list";
    else{
Node* temp=head;
for(int i=1;i<=idx-1;i++)
{
    temp=temp->next;
}
temp->next=temp->next->next;
size--;
    }

}


 void display()
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->val<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
};

int main()
{
LinkedList ll;
ll.inert_At_head(10);
ll.inert_At_head(20);
ll.inert_At_head(30);
ll.inert_At_tail(40);
ll.inert_At_tail(50);
ll.inert_At_tail(60);
ll.display();
ll.insertatidx(2,90);
ll.display();
cout<<ll.getat(2)<<endl;
ll.deleteathead();
ll.display();
ll.deleteattail();
ll.display();
ll.deleteatidx(2);
ll.display();

}