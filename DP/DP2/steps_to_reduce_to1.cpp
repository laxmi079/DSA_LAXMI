#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
//recursive solution
int f(int n)
{
 if(n==1) return 0;
 if(n==2 || n==3) return 1;

 return 1+min({f(n-1),(n%2==0)?f(n/2):inf,(n%3==0)?f(n/3):inf});
}

//rec+mem
vector<int>dp;
int ftd(int n)
{//T.C->O(n) S.C->O(n)

 if(n==1) return 0;
 if(n==2 || n==3) return 1;
if(dp[n]!=-1) return dp[n]; //nth state is precomputed
//if dp[n] is -1 we need to compute first this state
 return dp[n]=1+min({f(n-1),(n%2==0)?f(n/2):inf,(n%3==0)?f(n/3):inf});
}

//tabulation bottom-up
int fbu(int n)
{ //T.C->O(n) S.C->O(n)
    dp.clear();
    dp.resize(n+1,-1);
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++)
    {
  dp[i]=1+min({dp[i-1],(i%2==0)?dp[i/2]:inf,(i%3==0)?dp[i/3]:inf});
    }
    return dp[n];
}
int main()
{  //n->1000
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
   //cout<< f(n);
   //cout<< ftd(n);
   cout<<fbu(n);
}