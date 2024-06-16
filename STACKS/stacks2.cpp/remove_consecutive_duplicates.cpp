#include <bits/stdc++.h>
#include <stack>
using namespace std;
string remove_duplicates(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (st.top() != s[i])
            st.push(s[i]);
    }
    string ans="";
    while (st.size() > 0)
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string s = "aaabbcddaabffg";
    cout << remove_duplicates(s);
}