#include<bits/stdc++.h>
using namespace std;

    int largestSumAfterKNegations(vector<int>& nums, int k) {
       priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
    
       while(k>0)
       {
    
        int x=-pq.top();
        pq.pop();
        pq.push(x);
        k-=1;
       }
        int sum=0;
       while(pq.size()>0)
       {
        sum+=pq.top();
        pq.pop();
       }
        return sum;

    }

int main()
{
    vector<int>nums;
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(3);
   
    int k = 1;
    cout<<largestSumAfterKNegations(nums,k);
}