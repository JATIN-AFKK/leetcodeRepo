/*
 * Problem #416: Partition Equal Subset Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 17:25:26
 * Link: https://leetcode.com/problems/partition-equal-subset-sum/
 */

class Solution {
public:
    vector<vector<int>> dp;
    bool solve(int ind, vector<int>& nums, int required){
        if(ind == nums.size()) return 0 == required;

        if(dp[ind][required] != -1) return dp[ind][required];

        bool l = (required >= nums[ind])?solve(ind + 1, nums, required - nums[ind]) : false;;
        bool r = solve(ind + 1, nums, required);

        return dp[ind][required] = l | r;
    }
    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if(total % 2 == 1) return false;

        dp.assign(nums.size(), vector<int>(total/2 + 1, -1));
        bool ans =  solve(0, nums, total / 2);
        return ans;
    }
};
