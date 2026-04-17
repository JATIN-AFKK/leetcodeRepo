/*
 * Problem #1380: Lucky Numbers in a Matrix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 17:19:13
 * Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
 */

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int nrow = matrix.size(),ncol = matrix[0].size();

        vector<int> top(ncol,0),left(nrow,INT_MAX),result;
        int i ,j;
        for(i = 0;i < nrow;i++){
            for(j = 0;j < ncol;j++){
                top[j] = max(top[j],matrix[i][j]);
                left[i] = min(left[i],matrix[i][j]);
            }
        }
        for(i = 0;i < nrow;i++){
            for(j = 0;j < ncol;j++){
                if(top[j] == left[i]){
                    result.push_back(top[j]);
                }
            }
        }
        return result;
        
    }
};
