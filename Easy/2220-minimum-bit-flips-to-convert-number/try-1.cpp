/*
 * Problem #2220: Minimum Bit Flips to Convert Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 23:38:56
 * Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
 */

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n_xor = start^goal;
        int res = 0;
        while(n_xor){
            n_xor &= (n_xor - 1);
            res++;
        }
        return res;
    }
};
