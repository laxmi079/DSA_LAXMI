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
void display()
{
  for(int i=0;i<v;i++)
  {
    cout<<i<<"->";
    for(auto ele:graph[i])
    {
      cout<<ele<<",";
    }
  }
}

bool dfs(int src,int parent,unordered_set<int>&vis)
{
 vis.insert(src);
 for(auto neighbour:graph[src])
 {
    if(vis.count(neighbour)&& neighbour!=parent)
    {
        //cycle detected 
        return true;
    }
    if(!vis.count(neighbour))
    {
        dfs(neighbour,src,vis);
    }
 }
 return false;
}

bool has_cycle()
{
    unordered_set<int>vis;
    bool result=false;
    for(int i=0;i<v;i++)
    {
        if(!vis.count(i))
        {
            result=dfs(i,-1,vis);
            if(result==true ) return true;
        }
    }
    return false;
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
   display();
   cout<<endl;
   bool p= has_cycle();
           if(p==true) cout<<"cycle detected\n";
      
}