/*
 * Problem #674: Longest Continuous Increasing Subsequence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 09:53:34
 * Link: https://leetcode.com/problems/longest-continuous-increasing-subsequence/
 */

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max_val = 1,cur_val = 1;
        for(int i = 1; i < nums.size();i++){
            if(nums[i] > nums[i-1]){
                cur_val++;
                max_val = max(cur_val,max_val);
            }
            else{
                cur_val = 1;
            }
        }
        return max_val;

    }
};
