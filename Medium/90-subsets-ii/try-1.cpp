/*
 * Problem #90: Subsets II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 12:12:05
 * Link: https://leetcode.com/problems/subsets-ii/
 */

class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, vector<int> nums, vector<int> dp){
        ans.push_back(dp);
        for(int i = ind ; i < nums.size();i++){
            if(i > ind && nums[i] == nums[i - 1]) continue;
            
                dp.push_back(nums[i]);
                solve(i + 1, nums, dp);
                dp.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> dp;
        
        solve(0, nums, dp);
        return ans;

    }
};
