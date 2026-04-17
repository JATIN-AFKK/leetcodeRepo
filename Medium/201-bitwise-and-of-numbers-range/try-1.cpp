/*
 * Problem #201: Bitwise AND of Numbers Range
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 23:06:27
 * Link: https://leetcode.com/problems/bitwise-and-of-numbers-range/
 */

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while(left < right){
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return left << shift;
    }
};
