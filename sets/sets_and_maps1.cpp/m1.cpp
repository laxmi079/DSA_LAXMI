#include<bits/stdc++.h>
#include<unordered_map>
using  namespace std;
int main()
{
    // pair<int,int>p;
    // p.first=1;
    // p.second=2;
    // cout<<p.first;
    // pair<int,string>q;
    // q.second="fgtr";
    // cout<<q.first;
    
    pair<string,int>p1;
    pair<string,int>p2;
    pair<string,int>p3;
    unordered_map<string,int>m;
  /*  p1.first="grok";
    p1.second=20;
 
    m.insert(p1); */
    m["harsj"]=10;
    m["lokesh"]=14;
   
    for(auto p: m)
    {
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("harsj");
     for(auto p: m)
    {
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }  
        cout<<m.size()<<endl;
 
    

}