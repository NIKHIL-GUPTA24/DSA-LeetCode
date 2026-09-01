#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int solve2(vector<int>& nums){
        int n = nums.size();
        int prev2 = 0;
        int prev1 = nums[0];

        for(int i=1;i<n;i++){
            int include = prev2 + nums[i];
            int exclude = prev1 + 0;

            int ans = max(include, exclude);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int>dp1;
        vector<int>dp2;

        for(int  i=0;i<n ;i++){
            if(i != n-1){
                dp1.push_back(nums[i]);
            }
            if(i != 0) dp2.push_back(nums[i]);

        }
        return max(solve2(dp1) , solve2(dp2));
    }
};