#include <bits/stdc++.h>
using namespace std;
void insert_at_idx( stack<int>& st, stack<int>& helper,int idx,int x)
{
        while(st.size()>idx)
    {
        helper.push(st.top());
        st.pop();
    }
    st.push(x);
    while(helper.size()>0)
    {
        st.push(helper.top());
        helper.pop();
    }
     
}
void display(stack<int> st)
{
       while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void display_in_normal_order(stack<int> st)
{
    stack<int> temp;
    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();
    }
       while(temp.size()>0)
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
int main()
{
    int x=84;
    stack<int> st;
    stack<int> helper;
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    st.push(50); // 5
    int idx=2;
    insert_at_idx(st,helper,idx,x);
    display(st);
    display_in_normal_order(st);

}