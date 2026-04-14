/*
 * Problem #1020: Number of Enclaves
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/04/2026, 23:04:12
 * Link: https://leetcode.com/problems/number-of-enclaves/
 */

class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j){
        int n = grid.size(), m = grid[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m) return;
        if(grid[i][j] == 0) return;
        grid[i][j] = 0;
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        for(int i = 0;i < n; i++){
            dfs(grid, i, 0);
            dfs(grid, i, m - 1);
        }
        for(int j = 0;j < m; j++){
            dfs(grid, 0, j);
            dfs(grid, n - 1, j);
        }
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                count += grid[i][j];
            }
        }
        return count;
    }
};
