/*
 * Problem #1009: Complement of Base 10 Integer
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 09:37:36
 * Link: https://leetcode.com/problems/complement-of-base-10-integer/
 */

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int numbit = 32 - __builtin_clz(n);

        return (1 << numbit) - n - 1;
    }
};
