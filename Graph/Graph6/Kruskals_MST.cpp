#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int find(vector<int> &par, int x)
{
    return par[x] = (par[x] == x) ? x : find(par, par[x]);
}

void Union(vector<int>&parent,vector<int>&rank,int a,int b)
{
 a=find(parent,a);
 b=find(parent,b);
 if(a==b) return ;
 if(rank[a]>=rank[b])
 {
  rank[a]++;
  parent[b]=a;
 } else{
    rank[b]++;
    parent[a]=b;
 }
}


struct Edge
{
   int src;
   int dest;
   int wt;
};

bool cmp(Edge e1,Edge e2)
{
  return (e1.wt<e2.wt);
}

ll kruskals(vector<Edge>&input,int n,int e)
{
    sort(input.begin(),input.end(),cmp);
    vector<int>parent(n+1);
    vector<int>rank(n+1,1);
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
    }
    int edgecount=0; //n-1
    int i=0;
    ll ans=0;
    while(edgecount<n-1 && i<input.size())
    {
        Edge curr=input[i]; //because input is sorted and we will get min value of edge
        int srcpar=find(parent,curr.src);
        int destpar=find(parent,curr.dest);
        if(srcpar!=destpar)
        {
            //then it will not make a cycle
            Union(parent,rank,srcpar,destpar);
            ans+=curr.wt;
            edgecount++;
        }
        i++; //doesnt matter picked the last edge or not , we have still go to next edge
    }
return ans;
}


int main()
{

int n,e;
cin>>n>>e;
vector<Edge>v(e);
for(int i=0;i<e;i++){
 cin>>v[i].src>>v[i].dest>>v[i].wt;
}
cout<<kruskals(v,n,e);

}

