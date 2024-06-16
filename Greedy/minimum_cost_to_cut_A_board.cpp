#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int min_cost(int n,int m , vector<int> Y,vector<int>X)
{
    sort(X.begin(),X.end(),cmp);
    sort(Y.begin(),Y.end(),cmp);
    int hz=1;
    int vr=1;
    int h=0;
    int v=0;
    int ans=0;
    while(h<Y.size() && v<X.size())
    {
        if(X[v]>Y[h]) 
        {
            ans+=X[v]*vr;
            hz++;
            v++;
        }
        else
        {
            
            ans+=Y[h]*hz;
            vr++;
            h++;
    
        }
    }
    while(h<Y.size())
    {
        ans+=Y[h]*hz;
            vr++;
            h++;
    }
     while( v<X.size())
     {
       ans+=X[v]*vr;
            hz++;
            v++; 
     }
     return ans;
     
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>horizontal;
    vector<int>vertical;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    for(int i=0;i<m-1;i++)
    {
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    cout<<min_cost(n,m,horizontal,vertical);

}