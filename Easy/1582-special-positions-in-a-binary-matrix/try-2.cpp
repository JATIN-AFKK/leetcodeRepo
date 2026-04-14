/*
 * Problem #1582: Special Positions in a Binary Matrix
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 22:07:34
 * Link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
 */

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size(), ans = 0;
        vector<int> row(n, 0), col(m, 0);

        for(int r = 0;r < n;r++){
            for(int c = 0;c < m;c++){
                if(mat[r][c] == 1){
                    col[c]++;
                    row[r]++;
                }
            }
        }
        for(int r = 0;r < n;r++){
            for(int c = 0;c < m;c++){
                if(mat[r][c] == 1 && col[c] == 1 && row[r] == 1) ans++;
            }
        }
        return ans;
    }
};
