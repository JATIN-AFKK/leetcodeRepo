/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 7
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2025, 23:18:53
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,result = INT_MIN;
        for(auto i : nums){
            sum = sum + i;
            result = max(sum,result);
            if(sum<0){
                sum = 0;
            }
        }
        return result;

    }
};
