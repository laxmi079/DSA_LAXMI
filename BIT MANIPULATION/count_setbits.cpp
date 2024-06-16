#include<bits/stdc++.h>
#include<string>
using namespace std;
int count_bitset(int n)
{
return __builtin_popcount(n);
}
int count_bitset2(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=(n & n-1);
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_bitset(n)<<"\n";
    cout<<count_bitset2(n);
}