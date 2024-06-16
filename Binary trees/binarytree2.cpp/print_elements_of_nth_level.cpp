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
 void nth_level(Node* root,int curr_level,int req_level)
 {
    if(root==NULL) return;
    if(req_level==curr_level)
    cout<<root->val<<" "; //work
    nth_level(root->left,curr_level+1,req_level);
    nth_level(root->right,curr_level+1,req_level);
 
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
nth_level(a,1,1);//printing first level
cout<<endl; 
//level order traversal
nth_level(a,1,2);//printing 2nd level
cout<<endl; 
nth_level(a,1,3);//printing 3rd level

    
}