#include<bits/stdc++.h>
using namespace std;
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
void reverse(queue<int> &q)
{
stack<int>st;
//w=empty the queue
while(q.size()>0)
{
    int x=q.front();
    q.pop();
    st.push(x);
}
//fill the queue using stack
while(st.size()>0)
{
    int x=st.top();
    st.pop();
    q.push(x);
}

}
void remove(queue<int>&q)
{
 int n=q.size();
 for(int i=0;i<n;i++)
 {
    if(i%2==0) q.pop();
    else{
        int x=q.front();
        q.pop();
        q.push(x);
    }
 }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.size()<<endl;
    // q.pop();
    //     cout<<q.size();



    // display(q);
    // reverse(q);
    // display(q);
    remove(q);
    display(q);


}