//adjacency_list  
#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;

void adj(int src,int des,vector<list<int>>&graph, bool flag)
{
   
      graph[src].push_back(des);
      if(flag) graph[des].push_back(src);
    
}

void dfs(int node,unordered_set<int>&visited)
{
    visited.insert(node);
    for(auto neighbour :graph[node])
    {
        if(!visited.count(neighbour))
        {
            dfs(neighbour,visited);
        }
    }

}

int connected_components()
{
    int result=0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++)
    {
        //go to every vertex
        //if from a vertex we can initialize a dfs, we get one more cc
        if(visited.count(i)==0)
        {
            result++;
            dfs(i,visited);

        }
    }
return result;
}

int main()
{
  cin>>v;
  graph.resize(v,list<int> ());
  int e;
  cin>>e;
  while(e--)
  {
    int a,b;
    cin>>a>>b;
    adj(a,b,graph,true);
    //for directional graph  adj(a,b,graph,true);
  }
 
}