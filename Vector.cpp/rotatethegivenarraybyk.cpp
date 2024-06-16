#include<iostream>
#include<vector>
using namespace std;


void display( vector<int>&a)
{
     for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j, vector<int>&v)
    {
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}


int main()
{
    vector<int>v;
    for (int  i=0;i<8;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int n=v.size();
    int k=2;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}