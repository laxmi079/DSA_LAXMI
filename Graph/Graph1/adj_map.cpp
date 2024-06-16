//adjacency_list
#include<bits/stdc++.h>
using namespace std;
vector<unordered_map<int,int>>graph;
int v;

void adj(int src,int des,int wt,vector<unordered_map<int,int>>&graph, bool flag)
{
   
      graph[src][des]=wt;
      if(flag)  graph[des][src]=wt;
    
}
void display()
{
  for(int i=0;i<v;i++)
  {
    cout<<i<<"->";
    for(auto ele:graph[i])
    {
      cout<<"("<<ele.first<<" "<<ele.second<<")"<<",";
    }
  }
}
int main()
{
  cin>>v;
  graph.resize(v,unordered_map<int,int> ());
  int e;
  cin>>e;
  while(e--)
  {
    int a,b,w;
    cin>>a>>b>>w;
    adj(a,b,w,graph,true);
    //for directional graph  adj(a,b,graph,false);
  }
  display();
}