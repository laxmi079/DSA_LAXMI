#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v)
{
    for(int i=0; i<v.size();i++)
    {
        int noo=0;
        int noz=0;
        int notwo=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0) noz++;
            if(v[i]==1) noo++;
            if(v[i]==2) notwo++;
        }
          for(int i=0;i<v.size();i++)
          {
            if(i<noz) v[i]=0;
           else if(i<(noo+noz)) v[i]=1;
           else v[i]=2;
           
          }
          return;
    }
   
}
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    

    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
     for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}