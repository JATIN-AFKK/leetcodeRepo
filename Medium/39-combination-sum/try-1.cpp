/*
 * Problem #39: Combination Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 12:19:42
 * Link: https://leetcode.com/problems/combination-sum/
 */

class Solution {
public:
    int curSum = 0;
    vector<vector<int>> ans;
    void solve(int ind, vector<int> nums,vector<int> dp, int target){
        if(ind == nums.size() || curSum >= target){
            if(curSum == target){
                ans.push_back(dp);
            }
            return;
        }
        curSum += nums[ind];
        dp.push_back(nums[ind]);
        solve(ind, nums, dp, target);

        curSum -= nums[ind];
        dp.pop_back();

        solve(ind + 1, nums,  dp, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> dp;
        solve(0, candidates, dp, target);
        return ans;
    }
};
