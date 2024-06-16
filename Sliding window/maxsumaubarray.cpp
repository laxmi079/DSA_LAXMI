#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
int arr[]={7,1,2,5,8,4,9,3,6};
int n=(sizeof(arr)/sizeof(arr[0]));
int sum=0;
int idx=0;
int k=3;
for(int i=0;i<k;i++)
{
  sum=sum+arr[i];
}
int maxsum=sum;
int i=1;
int j=k;
while(j<n)
{
    sum=sum-arr[i-1]+arr[j];
    if(sum>maxsum)
    {
        maxsum=sum;
        idx=i;
    }
    i++;
    j++;
}
cout<<maxsum<<" "<<idx;
}