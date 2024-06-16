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
//   void nth_level_rev(Node* root,int curr_level,int req_level)
//  {
//     if(root==NULL) return;
//     if(req_level==curr_level)
//     cout<<root->val<<" "; //work
//     nth_level_rev(root->right,curr_level+1,req_level);
//      nth_level_rev(root->left,curr_level+1,req_level);
 
//  }
void levels_print(Node* root)
{
int n=levels(root);
for(int i=1;i<=n;i++)
{
nth_level(root,1,i);
cout<<endl;
}

}
/*this prints the binary tree usong queue(breadth first search)*/
void levelorder_queue(Node* root) //BFS
{
  queue<Node*>q;
  q.push(root);
  while(q.size()>0)
  {
    Node* temp=q.front();
    q.pop();
    cout<<temp->val;
    if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
  }
}
// here we construct a binary tree using the array provided
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
void top_view(Node* root)
{
    if (root == nullptr) return;

    unordered_map<int, int> m; // <level , root->val>
    queue<pair<Node*, int>> q; // <Node , level>
    pair<Node*, int> r;
    r.first = root;
    r.second = 0;
    q.push(r);

    while (!q.empty())
    {
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();

        if (m.find(level) == m.end())
            m[level] = temp->val;

        if (temp->left != nullptr)
        {
            pair<Node*, int> p;
            p.first = temp->left;
            p.second = level - 1;
            q.push(p);
        }

        if (temp->right != nullptr)
        {
            pair<Node*, int> p;
            p.first = temp->right;
            p.second = level + 1;
            q.push(p);
        }
    }

    // Print the top view
    for (auto x : m)
    {
        cout << x.second << " ";
    }
    cout << endl;
}


int main()
{
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
Node* root=construct(arr,n);
//level order traversal
levels_print(root);
top_view(root);


    
}