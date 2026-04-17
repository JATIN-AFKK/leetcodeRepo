/*
 * Problem #1004: Max Consecutive Ones III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/10/2025, 11:29:58
 * Link: https://leetcode.com/problems/max-consecutive-ones-iii/
 */

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count_zero = 0,end = -1,max_result = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0) count_zero++;
            if(count_zero > k){
                end++;
                if(nums[end] == 0) count_zero--;
            }
            max_result = max(max_result,i - end);
        }
        return max_result;
    }
};
