#include<bits/stdc++.h>
using namespace std;
void fillsieve(vector<int>&sieve)
{
 for(int i=1;i<sqrt(sieve.size());i++)
 {
    for(int j=i*2;j<sieve.size();j++ )
    {
        sieve[j]=0;
    }
 }
}

int main()
{
    int n=60;
  
    vector<int>sieve((n+1),1);
    fillsieve(sieve);
    sieve[0]=0;
    sieve[1]=0;
    
}