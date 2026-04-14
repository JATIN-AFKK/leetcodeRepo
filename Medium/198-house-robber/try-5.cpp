/*
 * Problem #198: House Robber
 * Difficulty: Medium
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 16:38:50
 * Link: https://leetcode.com/problems/house-robber/
 */

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 2);
        dp[n + 1] = 0;
        dp[n] = 0;
        for(int i = n - 1;i >= 0; i--){
            dp[i] = max(nums[i] + dp[i + 2], dp[i + 1]);
        }
        return dp[0];
    }
};
