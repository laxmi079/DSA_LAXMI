#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
int val;
Node *next;
Node(int val)
{
this->val=val;
this->next=NULL;
}
};
class LinkedList
{
    public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }
    void inserAtTail(int val)
    {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
 
    void insertAtHead(int val)
    {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;

        else{
        temp->next=head;
        head=temp;
        }
        size++; 
    }

    void insertAtidx(int idx, int val)
    {
         if(idx<0 || idx>size){ cout<<"INVALID IDX"; return;}
         else if(idx==0) 
         {
            insertAtHead(val);
         }
         else if(idx==size)
         {
            inserAtTail(val);
         }
         else
      {
        Node *t=new Node(val);
      Node *temp=head;
      for(int i=1;i<=idx-1;i++)
      {
        temp=temp->next;
      }
      t->next=temp->next;
      temp->next=t;
      size++;
      }
    }
 
    int getAtidx(int idx)
    {
        if(idx<0 || idx>=size) cout<<"INVALID IDX"; 
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else
      {
        Node *temp=head;
      for(int i=1;i<=idx;i++)
      {
      temp=temp->next;
      }
      return temp->val;
      }
      cout<<endl;
    }
 
    void deletAtHead()
    {
        if(size==0) 
        {
            cout<<"list is empty";
        }
        head=head->next;
        size--;
    }

    void deleteAtEnd()
{
if(size==0)
{
    cout<<"list is empty";
    return;
}
Node *temp=head;
while(temp->next!=tail)
{
    temp=temp->next;
}
temp->next=NULL;
tail=temp;
size--;
}

   void deleteAtIdx(int idx)
   {
if(size==0)
{
    cout<<"list is empty";
    return ;
}
else if(idx<0 || idx>=size)
{
    cout<<"invalid idx";
    return;
}
else if(idx==1) deletAtHead();
else if (idx=size-1) deleteAtEnd();
else{
    Node *temp=head;
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
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
           temp= temp->next;
        }
        cout<<endl;
    }


};
int main()
{
LinkedList ll;
ll.inserAtTail(111);
ll.display();
ll.inserAtTail(20);
ll.display();
ll.insertAtHead(400);
ll.display();
ll.insertAtidx(1,990);
ll.display();
cout<<ll.getAtidx(2)<<endl;;
ll.deletAtHead();
ll.display();
ll.deleteAtEnd();
ll.display();
ll.deleteAtIdx(1);
ll.display();
}