/*
 * Problem #2906: Construct Product Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/03/2026, 11:19:46
 * Link: https://leetcode.com/problems/construct-product-matrix/
 */

class Solution {
public:
    int MOD = 12345;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m));

        long long current = 1;
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                if(i == 0 && j == 0) current = 1;
                dp[i][j] = (current)%MOD;
                current *= grid[i][j];
                current %= MOD;
            }
        }

        for(int i = n - 1;i >= 0; i--){
            for(int j = m - 1;j >= 0; j--){
                if(i == n - 1 && j == m - 1) current = 1;
                dp[i][j] *= (current)%MOD;
                dp[i][j] %= MOD;
                current *= grid[i][j];
                current %= MOD;
            }
        }
        return dp;


    }
};
