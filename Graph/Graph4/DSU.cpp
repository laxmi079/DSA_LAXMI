#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&parent,int x)
{//this method finds which group/cluster does x belongs to   //T.C O(log*n)
   return parent[x]= (parent[x]==x)?x:find(parent,parent[x]);
}
void Union(vector<int>&parent,vector<int>&rank,int a,int b)
{
 a=find(parent,a);
 b=find(parent,b);
 if(rank[a]>=rank[b])
 {
  rank[a]++;
  parent[b]=a;
 } else{
    rank[b]++;
    parent[a]=b;
 }
}
int main()
{
    int n,m;
    cin>>n>>m;  //n->elements m->queries
    vector<int>parent(n+1);
    vector<int>rank(n+1,0);
    for(int i=0;i<n;i++)
    {
      parent[i]=i;
    }

    while(m--)
    {
        string str;
        cin>>str;
        if(str=="union")
        {
            int a,b;
            cin>>a>>b;
            Union(parent,rank,a,b);
        } else{
            int x;
            cin>>x;
          cout<<  find(parent,x);
        }
    }
}