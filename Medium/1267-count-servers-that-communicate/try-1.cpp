/*
 * Problem #1267: Count Servers that Communicate
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 01:08:38
 * Link: https://leetcode.com/problems/count-servers-that-communicate/
 */

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        vector<int> colvec(col, 0), rowc(row, 0);

        for(int i = 0;i < col;i++){
            for(int j = 0;j < row;j++){
                colvec[i] += grid[j][i];
            }
        }
        for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                rowc[i] += grid[i][j];
            }
        }

        int ans = 0;
        for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                if(rowc[i] > 1 || colvec[j] > 1) ans += grid[i][j];
            }
        }
        return ans;
        
    }
};
