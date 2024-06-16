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
 void displayTree(Node* root)
 {
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
      displayTree(root->right);
 }
 
 int sumTree(Node* root)
 {
    if(root==NULL) return 0;
    return root->val + sumTree(root->left) + sumTree(root->right);
 }
 int product(Node* root)
{
   if(root==NULL ) return 1;
   return root->val*product(root->left)*product(root->right);
}
  int sizeTree(Node* root)
 {
    if(root==NULL) return 0;
    return 1 + sizeTree(root->left) + sizeTree(root->right);
 }
 int maxInTree(Node* root)
 {
    if(root==NULL) return INT_MIN;
    int lMax=maxInTree(root->left);
    int rMax=maxInTree(root->right);
    int mx=max(root->val,max(lMax,rMax));
    return mx;
 }
   int level_of_Tree(Node* root)
 {
    if(root==NULL) return 0;
    return 1 + max(level_of_Tree(root->left) ,level_of_Tree(root->right));
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
    displayTree(a);
    cout<<endl;
    cout<<sumTree(a);
    cout<<endl;
    cout<<sizeTree(a);
    cout<<endl;
    cout<<maxInTree(a)<<endl;
    cout<<endl;
    cout<<level_of_Tree(a);
    cout<<endl;
   cout<<product(a);
}