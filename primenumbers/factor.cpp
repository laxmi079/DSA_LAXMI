#include<bits/stdc++.h>
#include<vector>
using namespace std;
void printfactors2(int n)
{
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--)
    {
        if(n%i==0) cout<<n/i<<" ";
    }
}

/*void printfactors(int n)
{
    vector<int> ans;
        for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
ans.push_back(i);
      }
    }
    for(int x:ans)
    {
        cout<<x<<" ";
    }
}*/
int main()
{
    int n=12;
    
//printfactors(n);
printfactors2(n);
}