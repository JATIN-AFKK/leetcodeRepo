/*
 * Problem #200: Number of Islands
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/04/2026, 22:18:18
 * Link: https://leetcode.com/problems/number-of-islands/
 */

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j){
        int n = grid.size(), m = grid[0].size();
        if(j < 0 || i < 0|| i >= n || j >= m) return;
        if(grid[i][j] == '0') return;
        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i - 1, j);
        dfs(grid, i, j - 1);


    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                if(grid[i][j] == '0') continue;
                count++;
                dfs(grid, i, j);
            }
        }
        return count;
    }
};
