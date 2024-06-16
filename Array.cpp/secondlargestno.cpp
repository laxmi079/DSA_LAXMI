#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];

    for(int i=0;i<=n-1;i++)
    {
        
        cin>>arr[i];
    }
     int max=INT64_MIN;
    for(int i=0;i<=n-1;i++)
    {
        if(max<arr[i]) max=arr[i];
        
    }
    int smax=INT64_MIN;
     for(int i=0;i<=n-1;i++)
    {
        if(smax<arr[i]&&max!=arr[i]) smax=arr[i];
    }

cout<<max;
cout<<smax;
}