#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&parent,int x)
{//this method finds which group/cluster does x belongs to   //T.C O(log*n)
   return parent[x]= (parent[x]==x)?x:find(parent,parent[x]);
}
void Union(vector<int>&parent,vector<int>&rank,vector<int>&minimal,vector<int>&maximal,vector<int>&sz,int a,int b)
{
 a=find(parent,a);
 b=find(parent,b);
 if(rank[a]>=rank[b])
 {
  rank[a]++;
  parent[b]=a;
  sz[a]+=sz[b];
  minimal[a]=min(minimal[a],minimal[b]);
  maximal[a]=max(maximal[a],maximal[b]);
 } else{
    rank[b]++;
    parent[a]=b;
    sz[b]+=sz[a];
  minimal[b]=min(minimal[a],minimal[b]);
  maximal[b]=max(maximal[a],maximal[b]);
 }
}
int main()
{
      // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    

    int n,m;
    cin>>n>>m;  //n->elements m->queries
    vector<int>parent(n+1);
    vector<int>maximal(n+1);
    vector<int>minimal(n+1);
    vector<int>rank(n+1,0);
    vector<int>sz(n+1,1);
    for(int i=0;i<n;i++)
    {
      maximal[i]=minimal[i]= parent[i]=i;
    }

    while(m--)
    {
        string str;
        cin>>str;
        if(str=="union")
        {
            int a,b;
            cin>>a>>b;
            Union(parent,rank,minimal,maximal,sz,a,b);
        } else{
            int x;
            cin>>x;
            x=find(parent,x);
          cout<<minimal[x]<<maximal[x]<<sz[x]<<endl;
        }
    }
}

