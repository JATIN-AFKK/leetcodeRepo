/*
 * Problem #64: Minimum Path Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/03/2026, 09:55:59
 * Link: https://leetcode.com/problems/minimum-path-sum/
 */

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            if(i == 0) dp[i][0] = grid[i][0];
            else dp[i][0] = dp[i - 1][0] + grid[i][0];
        }

        for(int i = 0; i < m; i++){
            if(i == 0) dp[0][i] = grid[0][i];
            else dp[0][i] = dp[0][i - 1] + grid[0][i];
        }

        for(int i = 1;i < n; i++){
            for(int j = 1;j < m; j++){
                dp[i][j] = grid[i][j] + min(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        return dp[n - 1][m - 1];
    }
};
