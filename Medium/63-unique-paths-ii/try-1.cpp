/*
 * Problem #63: Unique Paths II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/03/2026, 09:42:21
 * Link: https://leetcode.com/problems/unique-paths-ii/
 */

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int>(m));

        bool isOb1 = false;
        bool isOb2 = false;
        for(int i = 0;i < n; i++){
            dp[i][0] = 1;
            if(obstacleGrid[i][0] == 1) isOb1 = true;
            if(isOb1) dp[i][0] = 0;
        }
        for(int i = 0;i < m; i++) {
            dp[0][i] = 1;
            if(obstacleGrid[0][i] == 1) isOb2 = true;
            if(isOb2) dp[0][i] = 0;

        }
        for(int i = 1;i < n; i++){
            for(int j = 1;j < m; j++){
                int a = dp[i - 1][j];
                int b = dp[i][j - 1];
                dp[i][j] = a + b;
                if(obstacleGrid[i][j] == 1) dp[i][j] = 0;

            }
        }
        return dp[n - 1][m - 1];
    }
};
