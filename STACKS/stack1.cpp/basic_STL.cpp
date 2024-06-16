#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    stack<int> st; // size:0
    st.push(10);   // 1
    st.push(20);   // 2
    st.push(30);   // 3
    st.push(40);   // 4
    st.push(50);   // 5

    // cout<<st.size()<<endl;
    // cout<<st.top();
    //**printing the stack in reverse order-> emptying the stack
    // while(st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // **we will use extra stack
    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        temp.push((st.top()));
        st.pop();
    }
    cout << endl;
    //**storing the values in stack after emptying the stack
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl
         << st.top() << endl;
    //**printing in straight order
    //       while(temp.size()>0)
    //  {
    //    cout<<temp.top()<<" ";
    //    temp.pop();
    //  }
}