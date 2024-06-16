#include<bits/stdc++.h>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int>&a,vector<int>&b)
{
int i=0;
int j=0;
int k=0;
int count=0;
while(i<a.size()&&j<b.size())
{
  if(a[i]>b[j])
  {
    count+=a.size()-i;
    j++;
  }  
  else i++;
}
return count;
    
}


void mergesort(vector<int>&v)
{
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    if(n==1) return;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
c+=inversion(a,b);
    inversion(a,b);
    a.clear();
    b.clear();

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    mergesort(v);
    cout<<c;
}