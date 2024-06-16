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
 Node* construct(int arr[],int n)
{
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n)
    {
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN ) l=new Node(arr[i]);
        else l=NULL;
     if(j!=n && arr[j]!=INT_MIN ) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        
        i+=2;
        j+=2;
    }
    return root;
}
void leftboundary(Node* root)
{
if(root==NULL) return;
if(root->left==NULL && root->right==NULL)  return;
cout<<root->val;
leftboundary(root->left);
if(root->left==NULL) leftboundary(root->right);

}
void bottomboundary(Node* root)
{
 if(root==NULL) return;
 if(root->left==NULL && root->right==NULL) cout<<root->val;
bottomboundary(root->left);
bottomboundary(root->right);
}

void rightboundary(Node* root)
{
if(root==NULL) return;
 if(root->left==NULL && root->right==NULL) return;
rightboundary(root->right);
if(root->right==NULL) rightboundary(root->left);
cout<<root->val;
}

int main()
{
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    leftboundary(root);
    //cout<<endl;
bottomboundary(root);
// cout<<endl;
    rightboundary(root->right);
}
    
//12478963