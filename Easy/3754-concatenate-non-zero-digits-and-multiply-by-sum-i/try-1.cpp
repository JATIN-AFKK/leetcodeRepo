/*
 * Problem #3754: Concatenate Non-Zero Digits and Multiply by Sum I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/11/2025, 08:06:14
 * Link: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
 */

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0,sum = 0;
        long long power  = 1;
        while(n){
            if(n%10 != 00){
                x = x + ((n%10) * power);
                power *= 10;
                sum += n%10;
            }
            n = n/10;
        }
        return x*sum;
    }
};
