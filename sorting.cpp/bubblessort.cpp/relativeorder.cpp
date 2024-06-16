#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
     for(int i=0;i<n-1;i++)
     {
     int min=INT_MAX;
     int mindx=-1;
     for(int j=i;j<n;j++)
     {
    if(arr[j]<min){
        min=arr[j];
        mindx=j;
    }
     }
     swap(arr[i],arr[mindx]);
     }
     cout<<endl;
      for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}