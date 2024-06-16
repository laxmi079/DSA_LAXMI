#include<bits/stdc++.h>
using namespace std;
int v;
vector<list<int>>graph;
unordered_set<int>visited;
void add_edge(vector<list<int>>&graph,int src,int des,bool flag)
{
    graph[src].push_back(des);
    if(flag==true)
    graph[des].push_back(src);
}
void bfs(int src,int des,vector<int>&dis)
{
    queue<int>q;
    visited.clear();
    dis.resize(v,INT_MAX);
    dis[src]=0;
    visited.insert(src);
    q.push(src);
    while(!q.empty())
    {
       int curr=q.front();
       cout<<curr<<" ";
       q.pop();
       for(auto neighbours:graph[curr])
       {
        if(!visited.count(neighbours))
        {
            q.push(neighbours);
            visited.insert(neighbours);
            dis[neighbours]=dis[curr]+1;
        }
       }
    }
}
int main()
{
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--)
    {
        int s, d;
        cin>>s>>d;
        add_edge(graph,s,d,true);
    }
    int x,y;
    cin>>x>>y;
    vector<int>dis;
    bfs(x,y,dis);
    cout<<endl;
    for(auto ele: dis)
    {
        cout<<ele<<" ";
    }
  
}