//dfs

#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;
int v;
vector<vector<int>>result;
void add_edge(vector<list<int>>&graph,int src,int des,bool flag)
{
    graph[src].push_back(des);
    if(flag==true)
    graph[des].push_back(src);
}
void dfs(int curr,int end,vector<int>path)
{
   if(curr==end)
   {
    path.push_back(curr);
    result.push_back(path);
    path.pop_back();
    return;
   }
   visited.insert(curr);
   path.push_back(curr);
   for(auto neighbour:graph[curr])
   {
    if(visited.find(neighbour)==visited.end())
    {
        dfs(neighbour,end,path);
    }
   }
   path.pop_back();
   visited.erase(curr);
   return;

}

bool allpath(int src, int des) { 
    vector<int> path;
    dfs(src, des, path);
    return !result.empty();
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
    if (allpath(x, y)) {
        for (int i = 0; i < result.size(); i++) {
            for (auto ele : result[i]) {
                cout << ele << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No path found" << endl;
    }
}