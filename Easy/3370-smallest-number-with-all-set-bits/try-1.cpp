/*
 * Problem #3370: Smallest Number With All Set Bits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 21:17:57
 * Link: https://leetcode.com/problems/smallest-number-with-all-set-bits/
 */

class Solution {
public:
    int smallestNumber(int n) {
        int no_of_bits = 32 - __builtin_clz(n);
        int allOnes = (1<<no_of_bits) - 1;
        return allOnes;
    }
};
