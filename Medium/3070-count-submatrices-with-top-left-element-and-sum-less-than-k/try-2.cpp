/*
 * Problem #3070: Count Submatrices with Top-Left Element and Sum Less Than k
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2026, 09:55:08
 * Link: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
 */

class Solution {
public:
    using materix = vector<vector<int>>;
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        materix prefix(n + 1, vector<int>(m + 1, 0));

        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                prefix[i + 1][j + 1] = prefix[i + 1][j] + prefix[i][j + 1] - prefix[i][j] + grid[i][j];
                
                if(prefix[i + 1][j + 1] <= k) count++;
            }
        }
        
        return count;

    }
};
