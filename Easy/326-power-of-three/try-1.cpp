/*
 * Problem #326: Power of Three
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 00:38:53
 * Link: https://leetcode.com/problems/power-of-three/
 */

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        if(n == 1) return true;

        if(n % 3 != 0) return false;
        return isPowerOfThree(n / 3);
    }
};
