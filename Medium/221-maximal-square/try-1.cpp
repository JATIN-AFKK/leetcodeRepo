/*
 * Problem #221: Maximal Square
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/03/2026, 14:25:52
 * Link: https://leetcode.com/problems/maximal-square/
 */

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + (matrix[i][j] - '0');
            }
        }

        int maxSide = min(n, m);
        while(maxSide > 0){
            for(int i = 0;i <= n - maxSide; i++){
                for(int j = 0;j <= m - maxSide; j++){
                    int area = dp[i + maxSide][j + maxSide] - dp[i + maxSide][j] - dp[i][j + maxSide] + dp[i][j];
                    if(area == maxSide*maxSide) return area;
                }
            }
            maxSide--;
        }
        return 0;
    }
};
