/*
 * Problem #566: Reshape the Matrix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 10:49:19
 * Link: https://leetcode.com/problems/reshape-the-matrix/
 */

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();

        if(m*n != r*c) return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                int k = i*m + j;
                ans[k/c][k % c] = mat[i][j];
            }
        }
        return ans;
    }
};
