#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
 int val;
 Node* right;
 Node* left;
 Node(int val)
 {
    this->val=val;
    this->right=NULL;
    this->left=NULL;
 }
};
int levels(Node* root)
{
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
 void nth_level(Node* root,int curr_level,int req_level)
 {
    if(root==NULL) return;
    if(req_level==curr_level)
    cout<<root->val<<" "; //work
    nth_level(root->left,curr_level+1,req_level);
    nth_level(root->right,curr_level+1,req_level);
 
 }
  void nth_level_rev(Node* root,int curr_level,int req_level)
 {
    if(root==NULL) return;
    if(req_level==curr_level)
    cout<<root->val<<" "; //work
    nth_level_rev(root->right,curr_level+1,req_level);
     nth_level_rev(root->left,curr_level+1,req_level);
 
 }
void levels_print(Node* root)
{
int n=levels(root);
for(int i=1;i<=n;i++)
{
nth_level(root,1,i);
cout<<endl;
}
for(int i=1;i<=n;i++)
{
nth_level_rev(root,1,i);
cout<<endl;
}
}
int main()
{
       Node* a=new Node(1);//root
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
 levels_print(a);


    
}