#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int arr[]={1,0,4,9,0,5,9,3,0};
    int  n=9;
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
cout<<endl;

for(int i=0;i<n-1;i++)

{
    bool flag=true;
    for(int j=0;j<n-1-i;j++)
    {
       if(arr[j]==0)
       swap(arr[j],arr[j+1]);
    }

}
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}