/*
 * Problem #3212: Count Submatrices With Equal Frequency of X and Y
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/03/2026, 17:36:27
 * Link: https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y/
 */

class Solution {
public:
    using materix = vector<vector<int>>;
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        materix diff(n + 1, vector<int> (m + 1, 0));
        materix xmat(n + 1, vector<int> (m + 1, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                int val = 0;
                if(grid[i][j] == 'X') val = 1;
                else if(grid[i][j] == 'Y') val = -1;

                diff[i + 1][j + 1] = diff[i + 1][j] + diff[i][j + 1] - diff[i][j] + val;
                xmat[i + 1][j + 1] = xmat[i + 1][j] + xmat[i][j + 1] - xmat[i][j] + (grid[i][j] == 'X');
            }
        }

        int count = 0;
        for(int i = 1;i <= n; i++){
            for(int j= 1; j <= m; j++){
                if(diff[i][j] == 0 && xmat[i][j] >= 1) {
                    cout << i << " " << j << endl;
                    count++;
                }
            }
        }
        return count;
    }
};
