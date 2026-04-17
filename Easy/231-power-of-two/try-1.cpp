/*
 * Problem #231: Power of Two
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 15:48:48
 * Link: https://leetcode.com/problems/power-of-two/
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return (n&(n-1)) == 0;
    }
};
