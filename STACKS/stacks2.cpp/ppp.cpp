#include<bits/stdc++.h>
using namespace std;

int main()
{

int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int>pgi(n);
    pgi[0]=-1;
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
    while(st.size()>0 && arr[st.top()]<=arr[i])
    {
        st.pop();
    }
    if(st.size()==0) pgi[i]=-1;
    else pgi[i]=st.top();
    st.push(i);
    }
    vector<int>ans;
   for(int i=0;i<n;i++)
   {
    ans.push_back(abs(i-pgi[i]));
   }
     for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}