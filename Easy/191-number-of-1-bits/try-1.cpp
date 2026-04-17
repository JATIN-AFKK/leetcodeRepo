/*
 * Problem #191: Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 15:09:14
 * Link: https://leetcode.com/problems/number-of-1-bits/
 */

class Solution {
public:
    int hammingWeight(int n) {
        int result = 0;
        while(n){
            result += n%2;
            n/=2;
        }
        return result;
    }
};
