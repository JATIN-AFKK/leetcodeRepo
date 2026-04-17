/*
 * Problem #1749: Maximum Absolute Sum of Any Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/12/2025, 21:50:12
 * Link: https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/
 */

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int total = nums[0], maxSum = nums[0], curSum1 = nums[0], minSum = nums[0], curSum2 = nums[0];
        for(int i = 1;i < nums.size(); i++){
            curSum1 = max(curSum1 + nums[i], nums[i]);
            maxSum = max(maxSum, curSum1);

            curSum2 = min(curSum2 + nums[i], nums[i]);
            minSum = min(minSum , curSum2);
        }
        return max(abs(maxSum), abs(minSum));
    }
};
