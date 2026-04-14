/*
 * Problem #3546: Equal Sum Grid Partition I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/03/2026, 09:46:32
 * Link: https://leetcode.com/problems/equal-sum-grid-partition-i/
 */

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<long long> col(m, 0);
        vector<long long> row(n, 0);

        for(int i = 0;i < n; i++){
            for(int j = 0; j < m; j++){
                row[i] += grid[i][j];
                col[j] += grid[i][j];
            }
        }

        long long total = accumulate(row.begin(), row.end(), 0ll);
        long long first = 0;
        for(int i = 0;i < n - 1; i++){
            first += row[i];
            if(first * 2 == total) return true;

        }

        first = 0;
        for(int i = 0;i < m - 1; i++){
            first += col[i];
            if(first * 2 == total) return true;
        }
        return false;
        
    }
};
