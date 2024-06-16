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
 void preorder(Node* root)
 {
    if(root==NULL) return;
    cout<<root->val<<" "; //work
    preorder(root->left);//call1
    preorder(root->right);//call2
    //if work is done first , then it is called preorder
   // if the work is done between cal1 and call2 , then it is called in_order
   //if work is done after call1 and call2 then it is called post_order
 }
 void inorder(Node* root)
 {
    if(root==NULL) return;
   inorder(root->left);//call1
   cout<<root->val<<" "; //work
    inorder(root->right);//call2

 }
  void postorder(Node* root)
 {
    if(root==NULL) return;
   postorder(root->left);//call1
    postorder(root->right);//call2
     cout<<root->val<<" "; //work

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
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
    
}