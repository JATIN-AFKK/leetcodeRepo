/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 27/01/2025, 19:16:21
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,re = INT_MIN;
        for(int i = 0; i<nums.size();i++){
            sum = sum + nums[i];
            re = max(re,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return re;
    }
};
