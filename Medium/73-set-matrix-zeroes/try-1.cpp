/*
 * Problem #73: Set Matrix Zeroes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/02/2025, 14:34:09
 * Link: https://leetcode.com/problems/set-matrix-zeroes/
 */

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> col(matrix[0].size(),0);
        vector<int> row(matrix.size(),0);
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    col[j] = 1;
                    row[i] = 1;
                }
            }
        }
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(col[j] || row[i]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
