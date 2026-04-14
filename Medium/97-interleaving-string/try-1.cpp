/*
 * Problem #97: Interleaving String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/03/2026, 09:52:48
 * Link: https://leetcode.com/problems/interleaving-string/
 */

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size() + s2.size() != s3.size()) return false;
        int n = s1.size(), m = s2.size();

        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        dp[0][0] = true;
        for(int i = 0;i < m; i++){
            dp[0][i + 1] = dp[0][i] && (s2[i] == s3[i]);
        }
        for(int i = 0;i < n; i++){
            dp[i + 1][0] = dp[i][0] && (s1[i] == s3[i]);
        }

        for(int i = 1;i <= n; i++){
            for(int j = 1;j <= m; j++){
                if(s1[i - 1] == s3[i + j - 1]) dp[i][j] = dp[i][j] | dp[i - 1][j];
                if(s2[j - 1] == s3[i + j - 1]) dp[i][j] = dp[i][j] | dp[i][j - 1];
            }
        }
        return dp[n][m];
    }
};
