#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:

    int solve(vector<int>& nums, vector<int> &dp, int n){
        if(n < 0) return 0;
        if(n == 0) return nums[0];

        if(dp[n] != -1) return dp[n];

        int include = solve(nums, dp, n-2) + nums[n];
        int exclude = solve(nums, dp, n-1) + 0;

        dp[n] = max(include , exclude);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n , -1);
        return solve (nums, dp, n-1);
    }
};