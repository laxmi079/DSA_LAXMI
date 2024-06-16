#include<bits/stdc++.h>
using namespace std;
class Node{ public:
int val;
Node* next;
Node* prev;
Node(int val)
{
    this->val=val;
    this->next=NULL;
    this->prev=NULL;

}
};
class DLL
{ public:
Node* head;
Node* tail;
int size;
DLL()
{
    head=tail=NULL;
    size=0;
}
void inertathead(int val)
{

  Node* t=new Node(val);
  if(size==0) head=tail=t;
  else{
    t->next=head;
    head->prev=t;
    head=t;
  }
  size++;
 
}
void inertattail(int val)
{
  Node* t=new Node(val);
  if(size==0) head=tail=t;
  else{
    tail->next=t;
    t->prev=tail;
    tail=t;
  }
  size++;

}
void inertatidx(int idx, int val)
{
    if(size==0) 
    {
        cout<<"empty list";
    }
   else  if(idx==0) inertathead(val);
   else if(idx==size) inertattail(val);
    else if(idx<0 || idx>size) 
    {
        cout<<" invalid ";
        return;
    }
    else
    {
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++)
        {
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        t->next->prev=t;
        size++;
   
    }
   
}
void deleteathead()
{
 if(head==NULL) return;
 else if(size==1) head=tail=NULL;
 else{
    head=head->next;
    head->prev=NULL;
 }
 size--;
}
void deleteattail()
{
 if(head==NULL) return;
 else if(size==1) head=tail=NULL;
 else{
   tail=tail->prev;
   tail->next=NULL;
 }
 size--;
}
void deleteat(int idx)
{
if(size==0)
{
    cout<<"empty list";
    return;
}
else if(idx<0 || idx>size) 
{
    cout<<"invalid";
    return;
}
else if(idx==0) deleteathead();
else if(idx==size-1) deleteattail();
else{
  Node* temp=head;
  for(int i=1;i<=idx-1;i++)
  {
    temp=temp->next;
  }
  temp->next=temp->next->next;
  temp->next->next->prev=temp;
}
size--;
 }
int getat(int idx)
{
    if(size==0)
{
    cout<<"empty list";
    return -1;
}
else if(idx<0 || idx>size) 
{
    cout<<"invalid";
    return -1;
}
else if(idx==0) return head->val;
else if(idx==size-1) return tail->val;
else{
     Node* temp=head;
for(int i=1;i<=idx;i++)
  {
    temp=temp->next;
  }
  return temp->val;
}
}

void display()
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main()
{
    DLL ll;
    ll.inertathead(10);
    ll.inertathead(20);
    ll.inertathead(30);
    ll.inertattail(40);
    ll.inertattail(50);
    ll.inertattail(60);
    ll.display();
    ll.inertatidx(2,88);
    ll.display();
     ll.deleteathead();
      ll.display();
     ll.deleteattail();
      ll.display();
     ll.deleteat(1);
      ll.display();
    cout<< ll.getat(2);


    


}