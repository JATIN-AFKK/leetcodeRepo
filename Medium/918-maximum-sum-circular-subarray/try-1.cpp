/*
 * Problem #918: Maximum Sum Circular Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/12/2025, 20:56:54
 * Link: https://leetcode.com/problems/maximum-sum-circular-subarray/
 */

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN, sum = 0, sumd = 0, maxSumd = INT_MIN, total = 0;
        for(int i = 0;i < nums.size(); i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0) sum = 0;

            sumd += -nums[i];
            maxSumd = max(maxSumd, sumd);
            if(sumd < 0) sumd = 0;

            total += nums[i];
        }
        if(maxSumd + total == 0) return maxSum;
        return max(maxSum, total + maxSumd);
    }

};
