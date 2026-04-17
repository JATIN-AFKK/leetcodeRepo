/*
 * Problem #766: Toeplitz Matrix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 11:13:07
 * Link: https://leetcode.com/problems/toeplitz-matrix/
 */

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size(),col = matrix[0].size();
        for(int i = 0; i < row;i++){
            for(int j = 0;j < col;j++){
                if(i+1 < row && j+1<col && matrix[i+1][j+1] != matrix[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
};
