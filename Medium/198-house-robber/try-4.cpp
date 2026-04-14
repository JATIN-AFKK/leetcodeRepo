/*
 * Problem #198: House Robber
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 16:31:45
 * Link: https://leetcode.com/problems/house-robber/
 */

class Solution {
public:
    unordered_map<int,int> dp;
    int solve(int i, vector<int>& nums){
        if(i >= nums.size()) return 0;
        if(dp.count(i)) return dp[i];
        return dp[i] = max(nums[i] + solve(i + 2, nums), solve(i + 1, nums));
    }
    int rob(vector<int>& nums) {
        return solve(0, nums);
    }
};
