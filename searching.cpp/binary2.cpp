#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s[]={"12313","4245","452","49909"};
    int max=stoi(s[0]);
    string smax=s[0];
    for(int i=1;i<=3;i++)
    {
        if(max<stoi(s[i]))
        {
            max=stoi(s[i]);
            smax=s[i];
        }
    }
    cout<<max<<" "<<smax;
}
