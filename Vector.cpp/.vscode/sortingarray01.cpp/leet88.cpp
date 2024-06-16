#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&arr1,vector<int>&arr2)
{
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
           res[k]= arr2[i];
           i--;
           j--;

        }
    while(i==n)
    {
        if(j<n)
        {
            res[k]=arr2[j];
            k--;
            j--;
        }
    }
       while(j==m)
    {
        if(i<m)
        {
            res[k]=arr1[i];
            k--;
            i--;
        }
    }
    }
    return res;
}

int main()
{
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
      for(int i=0;i<arr1.size();i++)
     {
        cout<<arr1[i]<<" ";
     }
     cout<<endl;
    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(5);
    arr2.push_back(6);
    
     
     for(int i=0;i<arr2.size();i++)
     {
        cout<<arr2[i]<<" " ;
     }
     cout<<endl;

     vector<int> v=merge(arr1,arr2);
       for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }

}