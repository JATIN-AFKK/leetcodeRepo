/*
 * Problem #1314: Matrix Block Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 07/10/2025, 22:43:23
 * Link: https://leetcode.com/problems/matrix-block-sum/
 */

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        int c = mat[0].size();
        vector<vector<int>> result(r,vector<int>(c,0));
        vector<vector<int>> up(r + 1,vector<int>(c + 1,0));
        for(int i = 1;i <= r;i++){
            for(int j = 1;j <= c;j++){
                up[i][j] = mat[i-1][j-1] + up[i-1][j] + up[i][j - 1] - up[i -1][j - 1];
            }
        }
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                int x1 = max(0,i - k),x2 = min(i + k,r - 1);
                int y1 = max(0,j - k),y2 = min(j + k,c - 1);
                result[i][j] = up[x2+1][y2+1] - up[x2 + 1][y1] - up[x1][y2 + 1] + up[x1][y1];
            }
        }
        return result;

    }
};
