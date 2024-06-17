#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void add_edge(int a,int b,bool flag)
{
    graph[a].push_back(b);
    if(flag==true) graph[b].push_back(a);
}
void topoBFS()
{
    vector<int>indegree(v,0);
    unordered_set<int>vis;
    for(int i=0;i<v;i++)
    {
        for(auto neighbour:graph[i])
        {
            //i->neighbour
            indegree[neighbour]++;
        }
    }
    queue<int>q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0) 
        {
            q.push(i);
            vis.insert(i);
        }
    }
    while(!q.empty())
    {
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(auto neighbour:graph[node])
        {
            if(vis.count(neighbour)==0)
            {  
                 indegree[neighbour]--;
                if(indegree[neighbour]==0) 
                {
                    q.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}
int main()
{
   cin>>v;
   int e;
   cin>>e;
   graph.resize(v,list<int>());
   while(e--)
   {
    int a,b;
    cin>>a>>b;
    add_edge(a,b,false);
   }
   topoBFS();
}

/* 8
11
0 2
1 2
2 4
2 6
2 5
2 3
1 3
3 5
4 6
5 6
6 7 */