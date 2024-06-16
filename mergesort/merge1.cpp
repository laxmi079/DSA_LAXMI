#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&v)
{
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<=b[j]) 
        {
            v[k]=a[i];
            k++;
            i++;
        }
                else
        {
            v[k]=b[j];
            k++;
            j++;
        }
    }
    if(i==a.size())
    {
        while(j<b.size()) v[k++]=b[j++];
    }
     if(j==b.size())
    {
        while(i<a.size()) v[k++]=a[i++];
    }
}
void mergesort(vector<int>&v)
{
    int n=v.size();
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }for(int i=0;i<n2;i++)
    {
       b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
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
     for(int i=0;i<n;i++)
    {
       cout<<v[i];
    }


}