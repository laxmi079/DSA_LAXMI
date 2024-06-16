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
}