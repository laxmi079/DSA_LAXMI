#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter no. of rows";
cin>>n;

for(int i=1;i<=n;i++)
{
    int mid=n/2+1;
    for(int j=1;j<=n;j++)
    {
     if(i==mid||j==mid)
     cout<<"*";
     else cout<<" ";
     
    }
    cout<<endl;
}
}