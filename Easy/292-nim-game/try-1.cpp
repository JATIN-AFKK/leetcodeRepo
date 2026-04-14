/*
 * Problem #292: Nim Game
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/03/2026, 12:08:32
 * Link: https://leetcode.com/problems/nim-game/
 */

class Solution {
public:
    bool canWinNim(int n) {
        return n%4 != 0;
    }
};
