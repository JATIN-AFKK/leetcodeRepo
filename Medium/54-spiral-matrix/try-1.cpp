/*
 * Problem #54: Spiral Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2025, 09:47:25
 * Link: https://leetcode.com/problems/spiral-matrix/
 */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int top = 0,right = matrix[0].size()-1;
        int bottom = matrix.size()-1,left = 0;

        while(left<=right && top<=bottom){
            for(int i = left ; i<=right ; i++){
                vec.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top ; i<=bottom ; i++){
                vec.push_back(matrix[i][right]);
            }
            right--;

            if(top>bottom){
                break;
            }

            for(int i = right ; i>=left; i--){
                vec.push_back(matrix[bottom][i]);
            }
            bottom--;

            if(left>right){
                break;
            }

            for(int i = bottom ; i>=top ; i--){
                vec.push_back(matrix[i][left]);
            }
            left++;
        }
        return vec;
    }
};
