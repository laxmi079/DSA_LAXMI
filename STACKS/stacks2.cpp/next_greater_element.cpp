#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        int nge[n];
// **very bad T.C of O(n^2); //s.c O(1)  this is brute fore

    // for(int i=0;i<n;i++)
    // {
    // nge[i]=-1;
    // for(int j=i+1;j<n;j++)
    // {
    //  if(arr[j]>arr[i])
    //  {
    //     nge[i]=arr[j];
    //     break;
    //  }
    // }
    // }
// ** Using STACK  T.C ->O(n)  pop,ans,push
stack<int> st;
nge[n-1]=-1;
st.push(arr[n-1]);
for(int i=n-2;i>=0;i--)
{
    // pop all the elements smaller than arr[i];
    while(st.size()>0 && st.top()<=arr[i])
    {
        st.pop();
    }
    //mark the ans in nge array
    if(st.size()==0) nge[i]=-1;
    else nge[i]=st.top();
    //push the array arr[i] in stack
    st.push(arr[i]);

}
    for(int i=0;i<n;i++)
    {
        cout<<nge[i]<<" ";
    }
}