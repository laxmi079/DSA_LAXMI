#include<bits/stdc++.h>
using namespace std;
int v;
vector<list<int>>graph;
void add_edge(int src,int des,vector<list<int>>&graph,bool dir)
{
  graph[src].push_back(des);
  if(dir) graph[des].push_back(src);
}
unordered_set<int>visited;
vector<vector<int>>result;
vector<int>path;
void dfs(int curr,int end)
{
   if(curr==end) {
     path.push_back(curr);
     result.push_back(path);
     path.pop_back();
     return;
   }
   visited.insert(curr);
   path.push_back(curr);
   for(auto neighbour:graph[curr])
   {
   if(visited.count(neighbour)==0) {
    dfs(neighbour,end);
   }
   }
   path.pop_back();
   visited.erase(curr);
   return;
 
}


int main()
{
  cin>>v;
  int e;
  graph.resize(v,list<int>());
  cin>>e;
  while(e--)
  {
    int a, b;
    cin>>a>>b;
    add_edge(a,b,graph,true);
  }
  int x,y;
  cin>>x>>y;
dfs(x,y);
  
}