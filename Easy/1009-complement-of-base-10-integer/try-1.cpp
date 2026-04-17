/*
 * Problem #1009: Complement of Base 10 Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 11:36:30
 * Link: https://leetcode.com/problems/complement-of-base-10-integer/
 */

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0 || n == 1) return n^1;
        int a = 1;
        for(int i = 1;(1<<i) <= n;i++){
            a |= (a<<1);
        }
        return n ^ a;
    }
};
