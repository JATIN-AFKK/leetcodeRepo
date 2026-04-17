/*
 * Problem #48: Rotate Image
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/02/2025, 14:49:46
 * Link: https://leetcode.com/problems/rotate-image/
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size()/2;j++){
                swap(matrix[i][j],matrix[i][matrix.size()-1-j]);
            }
        }
    }
};
