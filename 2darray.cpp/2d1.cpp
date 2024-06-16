#include<iostream>
#include<vector>
using namespace std;
int main()
{
// vector< vector<int>>v;
// vector<int>v1;
// v1.push_back(2);
// v1.push_back(4);
// v1.push_back(5);
// vector<int>v2;
// v2.push_back(5);
// v2.push_back(4);
// v2.push_back(9);
// v2.push_back(6);
// vector<int>v3;
// v3.push_back(6);
// v3.push_back(4);
// v3.push_back(9);
// v3.push_back(5);
// v3.push_back(9);
// v3.push_back(3);

// v.push_back(v1);
// v.push_back(v2);
// v.push_back(v3);
 vector< vector<int>>v(3,vector<int>(4,2));
 for(int i=0;i<3;i++)
 {
    for (int j=0;j<4;j++)
    {
        cout<<v[i][j]<<" ";

    }
    cout<<endl;
 }

 }