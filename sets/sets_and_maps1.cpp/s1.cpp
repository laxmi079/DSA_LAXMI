#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;  // only unique elements are printed in this set.
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.erase(9);
    int target=1;
    //s.find() -> searches in the set ans if not found returns the last element
    if(s.find(target)!=s.end()) //target exists
    {
        cout<<"exists";
    }
    else cout<<"doesnt exists";
    cout<<endl;
    for(int ele: s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<s.size();
}