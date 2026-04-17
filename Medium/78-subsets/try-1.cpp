/*
 * Problem #78: Subsets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 18:11:07
 * Link: https://leetcode.com/problems/subsets/
 */

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int total = 1<<nums.size();
        for(int i = 0;i < total;i++){
            vector<int> set;
            for(int j = 0;j < nums.size();j++){
                if((i>>j) & 1) set.push_back(nums[j]);
            }
            res.push_back(set);
        }
        return res;
    }
};
