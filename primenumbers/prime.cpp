#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)  //T.C=O(sqrt(n))
    {
        if((n%i)== 0) return false;
    }
    return true;
}
int main()
{
    int n=60;
    if(isPrime(n)) cout<<"Prime";
    else cout<<"Composite";
}