/*
 * Problem #463: Island Perimeter
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 00:53:02
 * Link: https://leetcode.com/problems/island-perimeter/
 */

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i = 0;i < n; i++){
            int count = 0;
            for(int j = 0;j < m; j++){
                if(grid[i][j] == 1) count++;
                else if(count > 0){
                    count = 0;
                    ans++;
                }
            }
            if(count > 0) ans++;
        }

        for(int i = 0;i < m; i++){
            int count = 0;
            for(int j = 0;j < n; j++){
                if(grid[j][i] == 1) count++;
                else if(count > 0){
                    count = 0;
                    ans++;
                }
            }
            if(count > 0) ans++;
        }
        return 2*ans;
    }
};
