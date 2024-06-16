#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
 priority_queue<int>pq;
 pq.push(10);
 pq.push(54);
 pq.push(03);
 pq.push(99);
 cout<<pq.top()<<endl;
 priority_queue<int,vector<int>,greater<int>> mq;
 mq.push(10);
 mq.push(54);
 mq.push(03);
 mq.push(99);
 cout<<mq.top();
}