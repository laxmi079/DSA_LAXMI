#include <bits/stdc++.h>
#include<stack>
using namespace std;
void push_at_bottom_rec(stack<int> &st, int y)
{
    if (st.size() == 0)
    {
        st.push(y);
        return;
    }
    int x = st.top();
    st.pop();
    push_at_bottom_rec(st, y);
    st.push(x);
}
void display_rev_rec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    display_rev_rec(st);
    st.push(x);
}
void display_rec(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    display_rec(st);
    cout << x << " ";
    st.push(x);
}
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
    int y = 98;
    display_rev_rec(st);
    cout << endl;
    display_rec(st);
    cout << endl;
    push_at_bottom_rec(st, y);
    display_rec(st);

}