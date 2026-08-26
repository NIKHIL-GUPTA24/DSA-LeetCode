#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
int solve(vector<int>& nums, vector<int> &dp,int n, int start){
    if(n < start) return 0;
    if(dp[n] != -1) return dp[n];

    int include = nums[n] + solve(nums, dp, n-2,start);
    int exclude = solve(nums, dp , n-1, start);

    dp[n] = max(include, exclude);
    return dp[n];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        
        int a = solve(nums, dp1, n-2, 0);
        int b = solve(nums, dp2, n-1, 1);
        return max(a,b);
    }
};