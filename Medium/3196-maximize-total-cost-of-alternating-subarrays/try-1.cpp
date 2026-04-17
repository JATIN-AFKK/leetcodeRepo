/*
 * Problem #3196: Maximize Total Cost of Alternating Subarrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/12/2025, 16:10:44
 * Link: https://leetcode.com/problems/maximize-total-cost-of-alternating-subarrays/
 */

class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        int n = nums.size();
        vector<long long> dp(n + 1),v(n + 1);
        v[0] = 0;
        for(int i = 1;i <= n; i++){
            v[i] += v[i - 1] - nums[i - 1] * (i % 2 == 1?-1 : 1);
        }

        dp[0] = 0;
        long long bestEven = 0,bestOdd = INT_MIN;

        for(int r = 1;r <= n; r++){
            dp[r] = max(v[r] + bestEven, -v[r] + bestOdd);
            if(r%2 == 0) bestEven = max(bestEven, dp[r] - v[r]);
            else bestOdd = max(bestOdd, dp[r] + v[r]);
        }
        return dp[n];
    }
};
