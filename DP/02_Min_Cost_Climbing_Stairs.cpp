#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
int solve(int n , vector<int> &dp , vector<int> &cost){
    // BASE CASE
    if(n == 0) return cost[0];
    if(n == 1) return cost[1];

    // STEP -3
    if(dp[n] != -1) return dp[n];

    // STEP -2
    dp[n] = cost[n] + min(solve(n-1 , dp , cost) , solve(n-2 , dp , cost) ) ;
    return dp[n];

}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // STEP -1 
        vector<int> dp(n+1, -1);

        int ans = min(solve(n-1 , dp , cost) , solve(n-2 , dp , cost) );
        return ans;
    }
};