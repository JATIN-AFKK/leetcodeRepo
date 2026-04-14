/*
 * Problem #62: Unique Paths
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/03/2026, 09:21:55
 * Link: https://leetcode.com/problems/unique-paths/
 */

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n+1 , vector<int>(m + 1));

        for(int i = 0;i <= n; i++) dp[i][1] = 1;
        for(int i = 0;i <= m; i++) dp[1][i] = 1;

        for(int i = 2;i <= n; i++){
            for(int j = 2;j <= m; j++){
                dp[i][j] = dp[i - 1][j] + dp[i][ j - 1];
            }
        }

        return dp[n][m];
    }
};
