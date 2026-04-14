/*
 * Problem #416: Partition Equal Subset Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 17:37:45
 * Link: https://leetcode.com/problems/partition-equal-subset-sum/
 */

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        if(total % 2 == 1) return false;

        int required = total / 2;
        vector<vector<bool>> dp(n + 1, vector<bool>(required + 1, false));
        for(int i = 0;i <= n; i++) dp[i][0] = true;

        for(int i = n - 1; i >= 0; i--){
            for(int t = 1;t <= required; t++){
                bool left = (t >= nums[i]) ? dp[i + 1][t - nums[i]] : false;
                bool right = dp[i + 1][t];

                dp[i][t] = left || right;
            }
        }
        return dp[0][required];
    }
};
