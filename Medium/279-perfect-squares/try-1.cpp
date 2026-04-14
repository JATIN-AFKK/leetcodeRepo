/*
 * Problem #279: Perfect Squares
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 13:22:31
 * Link: https://leetcode.com/problems/perfect-squares/
 */

class Solution {
public:
    unordered_map<int, int> up;
    int numSquares(int n) {
        if(n == 0) return 0;
        int ans = INT_MAX;
        for(int i = 1; i*i <= n; i++){
            if(!up.count(n - i*i)) up[n - i*i] = numSquares(n - i*i);
            ans = min(ans, up[n - i*i]);
        }
        return ans + 1;
    }
};
