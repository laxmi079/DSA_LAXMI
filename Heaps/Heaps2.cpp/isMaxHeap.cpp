#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
Node* left;
Node* right;
Node(int val)
{
    this->val=val;
    left=right=NULL;
}
};


int sizeoftree(Node* root)
{
    if(root==NULL) return 0;
    return 1+sizeoftree(root->left)+sizeoftree(root->right);
}
bool ismax(Node* root)
{
 if(root==NULL) return true;
    if (root->left && root->val < root->left->val) return false;
    if (root->right && root->val < root->right->val) return false;

 return ismax(root->left) && ismax(root->right);
}
bool iscbt(Node* root)
{
    queue<Node*>q;
  q.push(root);
    if(root==NULL) return true;
    int size=sizeoftree(root);
    int count=0;
    while(count<size)
    {
        Node* temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL) q.push(temp->left);
        if(temp!=NULL) q.push(temp->right);
    }
    if(q.size()>0)
    {
        Node* temp=q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
int main()
{
   Node* a=new Node(20);
   Node* b=new Node(10);
   Node* c=new Node(16);
   Node* d=new Node(1);
   Node* e=new Node(8);
   Node* f=new Node(12);
   Node* g=new Node(5);
   a->left=b; a->right=c;
   b->left=d; b->right=e;
   c->left=f; c->right=g;
   if(ismax(a) && iscbt(a)) cout<<" yes !! It's a max heap";
   else cout<<"No";
   
   
}