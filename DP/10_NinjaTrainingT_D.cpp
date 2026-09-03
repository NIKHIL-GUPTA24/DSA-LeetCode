#include <bits/stdc++.h> 
using namespace std;
class Solution {
	public:
	int solve(vector<vector<int>> & mat, int day, int last, vector<vector<int> >&dp){
	    int maxi = 0;
	    if(day == 0){
	        maxi = 0;
	        for(int i=0;i<3;i++){
	            if(i != last){
	                maxi = max(maxi, mat[day][i]);
	            }
	        }
	        return maxi;
	    }
	    if(dp[day][last] != -1){
	        return dp[day][last];
	    }
	   
	    for(int i=0;i<3;i++){
	        if(i != last){
	            int points = mat[day][i] + solve(mat, day-1, i, dp);
	            maxi = max(maxi , points);
	        }
	    }
	    dp[day][last] = maxi;
	    return dp[day][last];
	}
	int maximumPoints(vector<vector<int>> & mat) {
	    int n = mat.size();
	    vector<vector<int> >dp(n, vector<int>(4,-1));
	    return solve(mat, n-1, 3, dp);
	}
};
