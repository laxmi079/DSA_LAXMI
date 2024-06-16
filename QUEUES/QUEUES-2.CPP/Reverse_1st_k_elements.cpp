#include<bits/stdc++.h>
using namespace std;
void reverse_k_elements(queue<int> &q, int k)
    
    {
        
        stack<int>st;
        for(int i=1;i<=k;i++)
        {
      st.push(q.front());
      q.pop();
        }
       
        while(st.size()>0)
        {
        q.push(st.top());
        st.pop();
        }

        int n=q.size();
        for(int i=1;i<=n-k;i++)
    {
     int x=q.front();
      q.push(x);
        q.pop();
    }
     
    } 
void display(queue<int> &q)
{
    int n=q.size();
    for(int i=1;i<=n;i++)
    {
        int x=q.front();
cout<<q.front()<<" ";
    q.pop();
    q.push(x);
    }
    cout<<endl;
    
}
int main()
{
    int k=2;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse_k_elements(q,k);
    display(q);
    
}