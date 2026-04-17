/*
 * Problem #1074: Number of Submatrices That Sum to Target
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/09/2025, 18:40:05
 * Link: https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/
 */

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(),col = matrix[0].size(),count = 0;
        vector<vector<int>> mat(row + 1,vector<int>(col + 1,0));
        for(int r = 1 ;r <= row;r++){
            for(int c = 1;c <= col;c++){
                mat[r][c] += matrix[r-1][c-1] + mat[r-1][c] + mat[r][c-1] - mat[r-1][c-1];
            }
        }
        for(int r1 = 0;r1 < row;r1++){
            for(int c1 = 0;c1 < col;c1++){
                for(int r2 = r1;r2 < row;r2++){
                    for(int c2 = c1;c2 < col;c2++){
                        int sum = mat[r2 + 1][c2 + 1] - mat[r1][c2 + 1] - mat[r2 + 1][c1] + mat[r1][c1];
                        if(sum == target) count++;
                    }
                }
            }
        }
        return count;
    }
};
