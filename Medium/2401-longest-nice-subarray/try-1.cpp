/*
 * Problem #2401: Longest Nice Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2025, 10:55:52
 * Link: https://leetcode.com/problems/longest-nice-subarray/
 */

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i = 0,result = 1,mask = 0;
        for(int j = 0;j < nums.size();j++){
            while((mask & nums[j]) != 0){
                mask = mask^nums[i];
                i++;
            }
            mask  = mask|nums[j];
            result = max(j-i+1,result);
        }
        return result;


    }
};
