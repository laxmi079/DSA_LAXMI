#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main()
{
  set<int>s;
  map<int,int>m;
//   s.insert(3);
//   s.insert(4);
//   s.insert(2);
// ordered set prints ascending order elements
//   for(int ele:s)
//   {
//     cout<<ele<<" ";
//   }
// 1,80 2,90 3,60
m[1]=80;
m[2]=98;
m[3]=60;
// here key is more important ,... elements are printed in ascending order of the key
for(auto ele: m)
  {
    cout<<ele.second<<" ";
  }
}