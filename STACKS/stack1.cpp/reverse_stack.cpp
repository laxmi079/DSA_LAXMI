#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> rt;
    stack<int> gt;
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    st.push(50); // 5
//by using two extra stacks;
    while (st.size() > 0)
    {
        rt.push(st.top());
        st.pop();
    }
    while (rt.size() > 0)
    {
        gt.push(rt.top());
        rt.pop();
    }
    while (gt.size() > 0)
    {
        st.push(gt.top());
        gt.pop();
    }
        while (st.size() > 0)
    {
       cout<<st.top()<<" ";
       st.pop();
    }
}