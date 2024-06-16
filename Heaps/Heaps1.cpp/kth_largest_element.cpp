#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,-5,-9,3,4};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}