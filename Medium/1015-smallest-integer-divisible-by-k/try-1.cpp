/*
 * Problem #1015: Smallest Integer Divisible by K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 22:43:05
 * Link: https://leetcode.com/problems/smallest-integer-divisible-by-k/
 */

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(gcd(k, 10) != 1) return -1;
        int n = 1, ans = 1;
        while(n % k != 0){
            n *= 10;
            n++;
            ans++;
            n %= k;
        }
        return ans;

    }
};
