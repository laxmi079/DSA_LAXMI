#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,7,4,1,8}; 
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int ele:arr)
    {
        pq.push(ele);
    }
    int cost=0;
    while(pq.size()>1)
    {
        int x=pq.top(); pq.pop();
        int y=pq.top(); pq.pop();
        pq.push(x+y);
        int f=x+y;
        cost+=f;
    }
    cout<<cost;
}