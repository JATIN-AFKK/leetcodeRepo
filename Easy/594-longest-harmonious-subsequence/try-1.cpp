/*
 * Problem #594: Longest Harmonious Subsequence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/01/2026, 16:54:54
 * Link: https://leetcode.com/problems/longest-harmonious-subsequence/
 */

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int max_val = 0;
        unordered_map<int,int> mpp;
        for(int num : nums) mpp[num]++;
        for(int i = 0;i < nums.size();i++){
            if(mpp[nums[i] + 1] != 0){
                max_val = max(max_val, mpp[nums[i]] + mpp[nums[i] + 1]);
            }
        }
        return max_val;
    }
};
