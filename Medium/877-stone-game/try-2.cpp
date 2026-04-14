/*
 * Problem #877: Stone Game
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/03/2026, 09:38:45
 * Link: https://leetcode.com/problems/stone-game/
 */

class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& piles, int l, int r){
        if(l == r) return piles[l];
        if(dp[l][r] != -1) return dp[l][r];
        int left = piles[l] - solve(piles, l + 1, r);
        int right = piles[r] - solve(piles, l , r - 1);

        dp[l][r] = max(left, right);
        return max(left, right);
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        return solve(piles, 0, piles.size() - 1) >= 0;
        
    }
};
