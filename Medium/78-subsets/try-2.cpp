/*
 * Problem #78: Subsets
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 10:54:05
 * Link: https://leetcode.com/problems/subsets/
 */

class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, vector<int> nums, vector<int> &subset){
        if(ind == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[ind]);
        solve(ind + 1, nums, subset);
        subset.pop_back();
        solve(ind + 1, nums, subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        solve(0, nums, subset);
        return ans;
    }
};
