/*
 * Problem #231: Power of Two
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 22:42:11
 * Link: https://leetcode.com/problems/power-of-two/
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        if(n == 1) return true;

        if(n % 2 == 1) return false;
        return isPowerOfTwo(n/2);
    }
};
