#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Stack //user defined data structure
{ public:
    vector<int> v; //no overflow condition
    int idx;
    Stack()
    {
        idx=-1;
    }
void push(int val)
{
   v.push_back(val);
}
void pop()
{
    if(v.size()==0) 
    {
        cout<< "stack is empty";
        return;
    }
    v.pop_back();
}
int top()
{
        if(v.size()==0) 
    {
        cout<< "stack is empty!! ";
        return -1;
    }
    return v[v.size()-1];
}
int size()
{
    return v.size();
}
};
int main()
{
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
     cout<<st.size()<<endl;
    cout<<st.top();
}