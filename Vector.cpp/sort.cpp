#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(80);
    v.push_back(40);
for (int i=0;i<v.size();i++)
{
cout<<v.at(i)<<" ";
}
cout<<endl;

//sort
sort(v.begin(),v.end());
for (int i=0;i<v.size();i++)
{
    cout<<v.at(i)<<" ";

}

}