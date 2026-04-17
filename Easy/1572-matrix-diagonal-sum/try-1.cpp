/*
 * Problem #1572: Matrix Diagonal Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2025, 12:36:36
 * Link: https://leetcode.com/problems/matrix-diagonal-sum/
 */

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, size = mat.size();
        for(int i = 0; i < size; i++ ){
            sum += mat[i][i];
            sum += mat[i][size - 1 -i];
        }
        if( size%2 ){
            return sum - mat[size/2][size/2];
        }
        return sum;
    }
};
