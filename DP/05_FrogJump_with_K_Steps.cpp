#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
int solve(vector<int>& heights, vector<int>& dp, int k, int n){
    if(n == 0) return 0;

    if(dp[n] != -1) return dp[n];

    int mini = INT_MAX;
    for(int i=1;i<=k;i++){
        if(n-i >= 0){
            int ans = solve(heights, dp, k, n-i) + abs(heights[n] - heights[n-i]);
            mini = min(mini , ans);
        }
    }
    return dp[n] = mini;

}
    int frogJump(vector<int>& heights, int k) {
        int n = heights.size();

        vector<int>dp(n+1 , -1);
        return solve(heights, dp, k, n-1);

    }
};
