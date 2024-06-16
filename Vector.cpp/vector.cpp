#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
   
v.push_back(6);//1 1
v.push_back(7);//2 2
v.push_back(9);//3 4
v.push_back(5);//4 4
v.push_back(3); //5 8
cout<<v.size()<<endl;// 6 8
cout<<v.capacity()<<endl;//7 8
v.push_back(62);//8 8
v.push_back(8);//9 16 
v.push_back(4);
cout<<v.capacity()<<endl;
v.push_back(5);
cout<<v.capacity()<<endl;
v[0]=88;
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
cout<<v[4]<<" ";
cout<<v[5]<<" ";
cout<<v[6]<<" ";
cout<<v[7]<<" ";
cout<<v[8]<<" ";



}