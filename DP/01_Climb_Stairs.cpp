#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
int Stairs(int n , vector<int>& dp){
    if(n == 0 || n==1 ) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = Stairs(n-1 , dp) + Stairs(n-2 , dp);
    return dp[n];
}
    int climbStairs(int n) {

        vector<int>dp(n+1 , -1);
        int ans = Stairs(n , dp) ;
        return ans;

    }
};