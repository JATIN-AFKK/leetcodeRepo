/*
 * Problem #2536: Increment Submatrices by One
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/11/2025, 19:36:55
 * Link: https://leetcode.com/problems/increment-submatrices-by-one/
 */

class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(auto &q : queries){
            auto a = q[0], b = q[1], c = q[2], d = q[3];
            dp[a][b] += 1;
            if(d + 1 < n) dp[a][d + 1] += -1;
            if(c + 1 < n && d + 1 < n) dp[c + 1][d + 1] += 1;
            if(c + 1 < n) dp[c + 1][b] += -1; 
        }

        for(int i = 0;i < n;i++){
            for(int j = 1;j < n;j++){
                dp[i][j] += dp[i][j-1];
            }
        }

        for(int j = 0;j < n;j++){
            for(int i = 1;i < n;i++){
                dp[i][j] += dp[i-1][j];
            }
        }

        return dp;
    }
};
