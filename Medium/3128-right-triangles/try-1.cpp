/*
 * Problem #3128: Right Triangles
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/02/2026, 10:53:50
 * Link: https://leetcode.com/problems/right-triangles/
 */

class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        vector<int> r(row, 0), c(col, 0);

        long long ans = 0;
        for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                r[i] += grid[i][j];
                c[j] += grid[i][j];
            }
        }

        for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                if(grid[i][j] == 0) continue;
                ans += (r[i] - 1) *(c[j] - 1);
                
            }
        }
        return ans;


    
        
    }
};
