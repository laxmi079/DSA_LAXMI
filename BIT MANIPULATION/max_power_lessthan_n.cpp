#include<bits/stdc++.h>
#include<string>
using namespace std;
int max_powerof_2(int n)
{
    n=n | (n>>1);
    n=n | (n>>2);
    n=n | (n>>4);
    n=n | (n>>8);
    n=n | (n>>16);
    return (n+1)>>1;
}
int main()
{
    int n;
    cin>>n;
    int temp;
    while(n != 0)
    {
        temp=n;
        n= n & (n-1);
    }
    cout<<temp<<"\n";
    int y=90;
    cout<<max_powerof_2(y);

}