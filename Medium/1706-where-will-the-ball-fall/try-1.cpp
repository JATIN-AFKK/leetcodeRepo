/*
 * Problem #1706: Where Will the Ball Fall
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 18:24:15
 * Link: https://leetcode.com/problems/where-will-the-ball-fall/
 */

class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> ans;
        for(int i = 0;i < m; i++){
            int col = i;
            int row = 0;
            for(row = 0;row < n; row++){
                if(grid[row][col] == 1){
                    if(col == m - 1 || grid[row][col + 1] == -1){
                        break;
                    }
                    else{
                        col++;
                    }
                }
                else{
                    if(col == 0 || grid[row][col - 1] == 1){
                        break;
                    }
                    else{
                        col--;
                    }
                }
            }
            if(row == n) ans.push_back(col);
            else ans.push_back(-1);
        }
        return ans;
    }
};
