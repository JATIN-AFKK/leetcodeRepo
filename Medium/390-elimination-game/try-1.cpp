/*
 * Problem #390: Elimination Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 17:30:27
 * Link: https://leetcode.com/problems/elimination-game/
 */

class Solution {
public:
    int lastRemaining(int n) {
        if(n == 1) return 1;
        return 2*(n/2 + 1 - lastRemaining(n/2));
        
    }
};
