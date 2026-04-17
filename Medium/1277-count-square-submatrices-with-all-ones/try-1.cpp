/*
 * Problem #1277: Count Square Submatrices with All Ones
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/03/2025, 18:42:42
 * Link: https://leetcode.com/problems/count-square-submatrices-with-all-ones/
 */

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));
        int c = 0;
        for(int i = 0;i < matrix.size();i++){
            dp[i][0] = matrix[i][0];
            c += dp[i][0];
        }
        for(int i = 1;i < matrix[0].size();i++){
            dp[0][i] = matrix[0][i];
            c += dp[0][i];
        }

        for(int i = 1;i < matrix.size();i++){
            for(int j = 1;j < matrix[0].size();j++){
                if(matrix[i][j]){
                    dp[i][j] = min({dp[i - 1][j - 1],dp[i][j-1],dp[i-1][j]}) + 1;
                }
                c += dp[i][j];
            }
        }
        return c;

    }
};
