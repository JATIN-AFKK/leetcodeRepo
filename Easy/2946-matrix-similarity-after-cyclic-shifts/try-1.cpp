/*
 * Problem #2946: Matrix Similarity After Cyclic Shifts
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/03/2026, 21:00:28
 * Link: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
 */

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        int shift = k % m;
        for(int i = 0;i < n; i++){
            shift *= -1;
            for(int j = 0;j < m;j++) if(mat[i][j] != mat[i][(j + m + shift) % m]) return false;
        }
        return true;
    }
};
