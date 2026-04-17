/*
 * Problem #2319: Check if Matrix Is X-Matrix
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 19/03/2025, 10:34:25
 * Link: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
 */

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int i ,j;
        for(i = 0;i <grid.size();i++){
            for(j = 0;j <grid[0].size();j++){
                if(i == j || i+j==grid.size()-1){
                    if( grid[i][j] == 0){
                        return false;
                    }
                } 
                else{
                    if(grid[i][j] != 0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
