/*
 * Problem #1823: Find the Winner of the Circular Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 01:37:01
 * Link: https://leetcode.com/problems/find-the-winner-of-the-circular-game/
 */

class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n == 1) return 1;
        return (k - 1 + findTheWinner(n - 1, k))%n + 1;
    }
};
