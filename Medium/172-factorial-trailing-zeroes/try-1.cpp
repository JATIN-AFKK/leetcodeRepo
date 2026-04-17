/*
 * Problem #172: Factorial Trailing Zeroes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/01/2025, 18:43:46
 * Link: https://leetcode.com/problems/factorial-trailing-zeroes/
 */

class Solution {
public:
    int trailingZeroes(int n) {
        int count1 = 0,d = 5;
        while(n/d > 0){
            count1+=n/d;
            d*=5;
        }
        return count1;       
    }
};
