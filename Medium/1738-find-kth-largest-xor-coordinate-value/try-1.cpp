/*
 * Problem #1738: Find Kth Largest XOR Coordinate Value
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/03/2026, 19:56:26
 * Link: https://leetcode.com/problems/find-kth-largest-xor-coordinate-value/
 */

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), m = matrix[0].size();
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<vector<int>> xr(n + 1, vector<int>(m + 1, 0));
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                xr[i + 1][j + 1] = xr[i + 1][j] ^ xr[i][j + 1] ^ xr[i][j] ^ matrix[i][j];
                pq.push(xr[i + 1][j + 1]);
                if(pq.size() > k) pq.pop(); 
            }
        }
        return pq.top();
    }
};
