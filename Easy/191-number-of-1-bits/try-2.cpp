/*
 * Problem #191: Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 15:11:31
 * Link: https://leetcode.com/problems/number-of-1-bits/
 */

class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        while(n){
            res += n&1;
            n = n>>1;
        }
        return res;
    }
};
