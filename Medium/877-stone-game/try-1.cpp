/*
 * Problem #877: Stone Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/03/2026, 09:32:49
 * Link: https://leetcode.com/problems/stone-game/
 */

class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& piles, int l, int r){
        if(piles[l] == piles[r]) return piles[l];
        // if(dp[])
        int left = piles[l] - solve(piles, l + 1, r);
        int right = piles[r] - solve(piles, l , r - 1);
        return max(left, right);
    }
    bool stoneGame(vector<int>& piles) {
        // return solve(piles, 0, piles.size() - 1);
        return true;
    }
};
