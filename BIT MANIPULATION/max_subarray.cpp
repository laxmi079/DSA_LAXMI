#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,3,1,6,6,6,4,3,1,19,19,19,2,4,24};
    int n=14;
    int ans=0;
    int count=0;
    int max_el=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_el)
        {
            max_el=arr[i];
            count=1;
        }
        else if(arr[i]==max_el)
        {
            count++;
        }
        ans=max(count,ans);
    }
    cout<<ans;

}