/*
 * Problem #3882: Minimum XOR Path in a Grid
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 21:14:14
 * Link: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
 */

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<bitset<1024>>> dp(n, vector<bitset<1024>>(m));
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                if(i == 0 && j == 0) {
                    dp[i][j][grid[0][0]] = 1;
                    continue;
                }
                if(i > 0){
                    for(int k = 0;k < 1024; k++){
                        if(dp[i - 1][j][k]){
                            dp[i][j][k ^ grid[i][j]] = 1;
                        }
                    }
                }
                if(j > 0){
                    for(int k = 0;k < 1024; k++){
                        if(dp[i][j - 1][k]){
                            dp[i][j][k ^ grid[i][j]] = 1;
                        }
                    }
                }
            }
        }
        for(int i = 0;i < 1024; i++){
            if(dp[n - 1][m - 1][i]) return i;
        }
        return -1;
        
    }
};
