/*
 * Problem #191: Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 15:14:46
 * Link: https://leetcode.com/problems/number-of-1-bits/
 */

class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        while(n){
            n = n & (n-1);
            res++;
        }
        return res;
    }
};
