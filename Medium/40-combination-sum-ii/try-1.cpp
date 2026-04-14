/*
 * Problem #40: Combination Sum II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 12:42:32
 * Link: https://leetcode.com/problems/combination-sum-ii/
 */

class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, vector<int>& nums,vector<int>& dp, int target){
        if(target == 0){
            ans.push_back(dp);
            return;
        }
        else if(target < 0) return;
        for(int i = ind; i < nums.size(); i++){
            if(i > ind && nums[i] == nums[i - 1]) continue;

            dp.push_back(nums[i]);
            solve(i + 1,nums, dp, target - nums[i]);
            dp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> dp;
        sort(candidates.begin(), candidates.end());
        solve(0, candidates, dp, target);
        return ans;
    }
};
