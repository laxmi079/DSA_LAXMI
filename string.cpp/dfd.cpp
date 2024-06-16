#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string ch;
    cin>>ch;
    int n=ch.length();
    int i=0;
    while(i<n)
    {
if(ch[i]=='.')  
{ch+='0';
i++;}
if(ch[i]=='-'&&ch[i+1]=='.')
{
    ch+=1;
    i+=2;
}
if(ch[i]=='-'&&ch[i+1]=='-')
{
    ch+=2;
    i+=2;
}
    }

    cout<<ch;
}