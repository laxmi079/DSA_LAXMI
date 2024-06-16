#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    vector<string>v;
    v.push_back("flight");
    v.push_back("flow");
    v.push_back("flower");
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    int n=v.size();
    string first=v[0];
    string last=v[n-1];
string s="";
for(int i=0;i<(min(first.size(),last.size()));i++)
{
    if(first[i]==last[i]) {
        s+=first[i];
        
    }
    else cout<<s;
   

}
cout<<s;

}