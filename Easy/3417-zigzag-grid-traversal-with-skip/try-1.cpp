/*
 * Problem #3417: Zigzag Grid Traversal With Skip
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2025, 12:54:29
 * Link: https://leetcode.com/problems/zigzag-grid-traversal-with-skip/
 */

class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> res;
        int start = 1;
        if(grid[0].size() % 2 == 0) start = 0;
        for(int i = 0;i < grid.size();i++){
            if(i % 2 == 0){
                for(int j = 0;j < grid[0].size();j += 2){
                    res.push_back(grid[i][j]);
                }
            }
            else{
                for(int j = grid[0].size() - 1 - start; j >= 0;j -= 2){
                    res.push_back(grid[i][j]);
                }
            }
        }
        return res;
    }
};
