/*
 * Problem #2435: Paths in Matrix Whose Sum Is Divisible by K
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 23:09:53
 * Link: https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/
 */

class Solution {
public:
    int M = 1e9 + 7;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(m, vector<long long>(k)));

        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                grid[i][j] %= k;
                if(i == 0 && j == 0) {
                    int sum = grid[i][j] % k;
                    dp[0][0][sum] = 1;
                    continue;
                }

                if(0 <= i - 1 && i - 1 < n && 0 <= j && j < m){
                    for(int l = 0;l < k; l++){
                        dp[i][j][l] += dp[i - 1][j][(k + l - grid[i][j]) % k];
                        dp[i][j][l] %= M;
                    }
                }

                if(0 <= i && i - 1 < n && 0 <= j - 1 && j - 1 < m){
                    for(int l = 0;l < k; l++){
                        dp[i][j][l] += dp[i][j - 1][(k + l - grid[i][j]) % k];
                        dp[i][j][l] %= M;
                    }
                }
            }
        }
        return dp[n - 1][m - 1][0];
    }
};
