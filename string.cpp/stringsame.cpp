#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string str="I am so lonely broken angel. I am so tired now so dont know";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {
v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxcount =1;
    int count =1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(count,maxcount);

    }
   
count =1;
     for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
       if(count==maxcount)
       cout<<v[i]<<endl<<maxcount;

    }
}