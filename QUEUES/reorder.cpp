#include<bits/stdc++.h>
using namespace std;
void reorder(queue<int>&q)
{
  int n=q.size();
  stack<int> st;
  for(int i=0;i<n/2;i++)
  {
 st.push(q.front());
 q.pop();
  }
// empty stack into queue
while(st.size()>0)
{
 q.push(st.top());
 st.pop();
}
// pop 2nd half(noow the first) of the queue to stack
for(int i=0;i<n/2;i++)
{
    st.push(q.front());
    q.pop();
}
// most important step(interleave one by one)
while(st.size()>0)
{
    q.push(st.top());
    st.pop();
    q.push(q.front());
    q.pop();
}
// reverse q using stack

while(q.size()>0)
{
    st.push(q.front());
    q.pop();
}
while(st.size()>0)
{
    q.push(st.top());
    st.pop();
}

}

void display(queue<int>&q)
{
    int n=q.size();
for(int i=0;i<n;i++)
{
int x=q.front();
cout<<x<<" ";
q.pop();
q.push(x);
}
cout<<endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    reorder(q);
    display(q);

}