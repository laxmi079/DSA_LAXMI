#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&a)
{
    a.at(3)=100;

}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(93);
    v.push_back(94);
    v.push_back(92);
    v.push_back(90);

    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
}