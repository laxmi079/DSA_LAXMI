#include<iostream>
#include<vector>
using namespace std;
void nextpermutation(vector<int>&nums)
{
      int n=nums.size();
        //1finding pivot
        int idx=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
        }   
    
    //sorting after pivot
    reverse(nums.begin()+idx+1,nums.end());
    //finding just greater no. than index
    int j=-1;
    for(int i=idx+1;i<n;i++)
    {
        if(nums[i]>nums[idx])
        {
            j=i;
            break;
        }
    }
    //swapping
    
    
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
    return;
}
    
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    
      for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;
     nextpermutation(v);
      for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
}