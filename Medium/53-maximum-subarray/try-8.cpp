/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 8
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2025, 16:04:23
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int bestValueL = INT_MAX;

        int preSum = 0;
        for(int r = 0;r < nums.size(); r++){
            bestValueL = min(bestValueL, preSum);
            ans = max(preSum + nums[r] - bestValueL, ans);
            preSum += nums[r];
        }
        return ans;
    }
};
