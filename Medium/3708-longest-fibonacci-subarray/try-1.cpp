/*
 * Problem #3708: Longest Fibonacci Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/10/2025, 20:27:29
 * Link: https://leetcode.com/problems/longest-fibonacci-subarray/
 */

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_count = 2,count = 2;
        for(int i = 2;i < nums.size();i++){
            if(nums[i] == nums[i-1] + nums[i - 2]){
                count++;
            }
            else{
                count = 2;
            }
            max_count = max(max_count,count);
        }
        return max_count;
        
    }
};
