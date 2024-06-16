#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
f*=i;

    }
return f;
    }
int combination(int n, int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutation(int n,int r)
{
    int npr=fact(n)/(fact(n-r));
    return npr;
}

int main()

{
    int n;
    cin>>n;
    int r;
    cin>>r;
    int ncr=combination( n, r);
    cout<<ncr;
    cout<<endl;
    int npr=permutation(n,r);
    cout<<npr;
}