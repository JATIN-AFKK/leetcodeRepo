/*
 * Problem #1351: Count Negative Numbers in a Sorted Matrix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 16:55:39
 * Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
 */

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,result = 0;
        int nrow = grid.size(),ncol = grid[0].size();
        for(i = 0;i < nrow;i++){
            for(j = ncol - 1;j >= 0;j--){
                if(grid[i][j] < 0){
                    result++;
                }
                else{
                    break;
                }
            }
        }
        return result;
    }
};
