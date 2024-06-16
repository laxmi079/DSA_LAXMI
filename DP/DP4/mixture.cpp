//spoj
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[105][105];
ll g(int i,int j,vector<int>&colors)
{
    ll result=0;
    for(int m=i;m<=j;m++)
    {
  result=(result%100 + (colors[m])%100 )%100;
    }
    return result;
}
ll f(int i, int j, vector<int> &colors)
{
   if(i==j) return 0;
 if(dp[i][j]!=-1) return dp[i][j];

   ll ans=INT_MAX;

   for(int k=i;k<=j-1;k++)
   {
    ans=min(ans,(f(i,k,colors)+f(k+1,j,colors)+g(i,k,colors)*g(k+1,j,colors)));
   }
   return dp[i][j]=ans;
}

ll fbu(vector<int>&colors)
{
    memset(dp,0,sizeof dp);
    int n=colors.size();
    for(int len=2;len<=n;len++)
    {
        for(int i=0;i<=n-len;i++)
        {
            int j=i+len-1;
            ll ans=INT_MAX;

   for(int k=i;k<=j-1;k++)
   {
    ans=min(ans,(dp[i][k]+dp[k+1][j] +g(i,k,colors)*g(k+1,j,colors)));
   }
   dp[i][j]=ans;
        }
    }
    return dp[0][n-1];
}

int main()
{
    int n;
    while(cin>>n)
    {
       vector<int>colors;
       for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
         colors.push_back(x);
       }
memset(dp,-1,sizeof dp);

     cout<<f(0,n-1,colors);

     colors.clear();

    }

}