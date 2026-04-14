/*
 * Problem #3071: Minimum Operations to Write the Letter Y on a Grid
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/02/2026, 23:12:36
 * Link: https://leetcode.com/problems/minimum-operations-to-write-the-letter-y-on-a-grid/
 */

class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        array<int,3> arr1 = {};
        array<int,3> arr2 = {};

        int n = grid.size();
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(j == i && i < n/2) arr1[grid[i][j]]++;
                else if(i >= n/2 && j == n/2) arr1[grid[i][j]]++;
                else if(i < n/2 && i + j == n - 1) arr1[grid[i][j]]++;
                else arr2[grid[i][j]]++;
            }
        }
        int ans = INT_MAX;
        for(int i = 0;i < 3;i++){
            for(int j = 0;j < 3;j++){
                if(i == j) continue;
                ans = min(ans, n*n - arr1[i] - arr2[j]);
            }
        }
        return ans;
    }
};
