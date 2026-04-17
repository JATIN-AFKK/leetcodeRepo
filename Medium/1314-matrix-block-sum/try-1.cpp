/*
 * Problem #1314: Matrix Block Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/09/2025, 18:59:33
 * Link: https://leetcode.com/problems/matrix-block-sum/
 */

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int row = mat.size(),col = mat[0].size();
        vector<vector<int>> pre(row + 1,vector<int>(col+1,0));

        for(int r = 1;r <= row; r++){
            for(int c = 1;c <= col; c++){
                pre[r][c] += mat[r-1][c-1] + pre[r - 1][c] + pre[r][c-1] - pre[r - 1][c - 1];
            }
        }
        
        vector<vector<int>> ans(row,vector<int>(col,0));
        for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                int lowx = max(0,i - k);
                int lowy = max(0,j - k);
                int maxx = min(row - 1,i + k);
                int maxy = min(col - 1,j + k);

                ans[i][j] = pre[maxx + 1][maxy + 1] - pre[maxx + 1][lowy] - pre[lowx][maxy + 1] + pre[lowx][lowy];
            }
        }
        return ans;
    }
};
