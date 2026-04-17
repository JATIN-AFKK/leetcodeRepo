/*
 * Problem #918: Maximum Sum Circular Subarray
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 05/12/2025, 21:14:33
 * Link: https://leetcode.com/problems/maximum-sum-circular-subarray/
 */

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0], curSum1 = nums[0], curSum2 = nums[0], minSum = nums[0];
        int total = nums[0];
        for(int i = 1;i < nums.size(); i++){
            curSum1 = max(curSum1 + nums[i], nums[i]);
            maxSum = max(curSum1, maxSum);

            curSum2 = min(curSum2 + nums[i], nums[i]);
            minSum = min(curSum2, minSum);

            total += nums[i];
        }
        int circularSum = total - minSum;
        cout << circularSum;
        if(circularSum == 0) return maxSum;
        return max(circularSum, maxSum);
    }
};
