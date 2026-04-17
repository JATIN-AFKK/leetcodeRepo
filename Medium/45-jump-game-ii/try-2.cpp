/*
 * Problem #45: Jump Game II
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 24/03/2025, 23:56:33
 * Link: https://leetcode.com/problems/jump-game-ii/
 */

class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),INT_MAX);
        dp[0] = 0;
        for(int i = 0;i < nums.size();i++){
            for(int j = 1;j <= nums[i];j++){
                if(i+j < nums.size())
                dp[i+j] = min(dp[i]+1,dp[i+j]);
            }
        }
        return dp[nums.size() - 1];
    }
};
