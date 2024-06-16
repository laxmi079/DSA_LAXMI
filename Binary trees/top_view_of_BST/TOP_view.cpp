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
    else return 1+max(levels(root->left),levels(root->right));

}
void print(Node* root,int curr, int req)
{
    if(root==NULL) return;
 if(curr==req) 
 {
    cout<<root->val;
 }
 print(root->left,curr+1,req);
 print(root->right,curr+1,req);

}
void levelorder(Node* root)
{
    
 int n=levels(root);
 for(int i=1;i<=n;i++)
 {
    print(root,1,i);
     cout<<endl;
 }
}
Node* construct(int arr[],int n)
{
Node* root=new Node(arr[0]);
queue<Node*>q;
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

void topview(Node* root)
{
   unordered_map<int,int>mp;//level,value
   queue<pair<Node*,int>>q;//value,level
   q.push({root,0});
   while(q.size()>0)
   {
    Node* temp=q.front().first;
    int lev=q.front().second;
    q.pop();
    if(mp.find(lev)==mp.end()) mp[lev]=temp->val;
    if(temp->left!=NULL) q.push({temp->left,lev-1});
    if(temp->right!=NULL) q.push({temp->right,lev+1});
   }
   int mxlevel=INT_MIN;
    int mnlevel=INT_MAX;

   for(auto ele: mp)
   {
    int level=ele.first;
    mnlevel=min(level,mnlevel);
    mxlevel=max(level,mxlevel);
   }
   for(int i=mnlevel;i<=mxlevel;i++)
   {
    cout<<mp[i]<<" ";
   }
}
int main()
{
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
Node* root=construct(arr,n);
//level order traversal
levelorder(root);
cout<<endl;
topview(root);
}