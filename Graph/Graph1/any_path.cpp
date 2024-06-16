//dfs
#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;
int v;
void add_edge(vector<list<int>>&graph,int src,int des,bool flag)
{
    graph[src].push_back(des);
    if(flag==true)
    graph[des].push_back(src);
}
bool dfs(int curr,int end)
{
    if(curr==end) return true;
 visited.insert(curr); //mark visited
 for(auto neighbour:graph[curr])
 {
    if(visited.find(neighbour)==visited.end())
    {
        bool result=dfs(neighbour,end);
        if(result) return true;
    }
 }
 return false;
}

bool anypath(int src,int des)
{
return dfs(src,des);
}
// void display()
// {
//     for(int i=0;i<v;i++)
//     {  cout<<i<<"->";
//         for(int ele:graph[i])
//         {
//             cout<<ele<<",";
//         }
//     }
// }
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
    cout<<anypath(x,y)<<endl;
}