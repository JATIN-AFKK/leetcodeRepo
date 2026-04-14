/*
 * Problem #1594: Maximum Non Negative Product in a Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/03/2026, 10:45:57
 * Link: https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/
 */

class Solution {
public:
    int MOD = 1e9 + 7;
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<pair<long long,long long>>> dp(n, vector<pair<long long, long long>>(m));

        dp[0][0] = {grid[0][0], grid[0][0]};
        for(int i = 1;i < n; i++){
            dp[i][0] = {dp[i - 1][0].first * grid[i][0], dp[i - 1][0].second * grid[i][0]};
        }

        for(int i = 1;i < m; i++){
            dp[0][i] = {dp[0][i - 1].first * grid[0][i], dp[0][i - 1].second * grid[0][i]};
        }

        for(int i = 1;i < n; i++){
            for(int j = 1;j < m ; j++){
                vector<long long> num = {dp[i][j - 1].first * grid[i][j], dp[i][j - 1].second * grid[i][j], dp[i - 1][j].first * grid[i][j], dp[i - 1][j].second * grid[i][j]};
                sort(num.begin(), num.end());

                dp[i][j] = {num[0], num[3]};
            }
        }

        if(dp[n - 1][m - 1].second < 0) return -1;
        return dp[n - 1][ m - 1].second % MOD;

    }
};
