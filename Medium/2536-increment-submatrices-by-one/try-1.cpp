/*
 * Problem #2536: Increment Submatrices by One
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/11/2025, 19:24:06
 * Link: https://leetcode.com/problems/increment-submatrices-by-one/
 */

class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>dp(n + 1,vector<int>(n + 1,0));
        for(auto &q : queries){
            auto a = q[0], b = q[1], c = q[2], d = q[3];
            dp[a][b] += 1;
            dp[a][d + 1] += -1;
            dp[c + 1][d + 1] += 1;
            dp[c + 1][b] += -1; 
        }

        for(int i = 0;i <= n;i++){
            for(int j = 1;j <= n;j++){
                dp[i][j] += dp[i][j-1];
            }
        }

        for(int j = 0;j <= n;j++){
            for(int i = 1;i <= n;i++){
                dp[i][j] += dp[i-1][j];
            }
        }

        dp.resize(n);
        for(auto &row : dp){
            row.resize(n);
        }

        return dp;
    }
};
