#include<bits/stdc++.h>
using namespace std;
//this is tabulation
class Solution {
public:
    vector<int> dp;

    int f(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        dp.clear();
        dp.resize(n);
        dp[n-1] = nums[n-1];
        dp[n-2] = max(nums[n-1], nums[n-2]);
        
        for (int i = n-3; i >= 0; i--) {
            dp[i] = max(nums[i] + dp[i+2], dp[i+1]);
        }
        return dp[0];
    }

    int rob(vector<int>& nums) {
        return f(nums);
    }
};
//recursion+memoization
class Solution {
public:
 vector<int>dp;
int f(vector<int>& nums,int idx)
{
    if(idx==nums.size()-1) return dp[idx]=nums[idx];
    if(idx==nums.size()-2) return dp[idx]=max(nums[idx],nums[idx+1]);
    if(idx>=nums.size()) return dp[idx]=0;
    if(dp[idx]!=-1) return dp[idx];
    return dp[idx]=max((nums[idx]+f(nums,idx+2)),(0+f(nums,idx+1)));
}
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(105,-1);
       return f(nums,0);
    }
};

//with only recursion TLE 
