/*
 * Problem #390: Elimination Game
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/03/2026, 13:24:59
 * Link: https://leetcode.com/problems/elimination-game/
 */

class Solution {
public:
    int lastRemaining(int n) {
        if(n == 1) return 1;
        return 2*(n/2 + 1 - lastRemaining(n/2));
    }
};
