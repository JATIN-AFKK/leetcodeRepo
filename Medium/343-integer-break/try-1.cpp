/*
 * Problem #343: Integer Break
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/03/2026, 10:25:22
 * Link: https://leetcode.com/problems/integer-break/
 */

class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n + 1, INT_MIN);
        dp[0] = 0;
        for(int i = 1;i <= n; i++){
            for(int k = 0;k <= i; k++){
                dp[i] = max(dp[i], k * (i - k));
                dp[i] = max(dp[i], dp[k] * dp[i - k]);
                dp[i] = max(dp[i], k * dp[i - k]);
                dp[i] = max(dp[i], dp[k] * (i - k));
            }
        }
        return dp[n];
    }
};
