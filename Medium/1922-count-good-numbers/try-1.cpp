/*
 * Problem #1922: Count Good Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 11:19:22
 * Link: https://leetcode.com/problems/count-good-numbers/
 */

class Solution {
public:
    int MOD = 1e9 + 7;
    int pow(int x, long long n){
        long long power = x;
        long long ans = 1;
        while(n){
            if(n & 1) ans *= power;
            power = power * power;

            power %= MOD;
            ans %= MOD;
            n = (n >> 1);
        }
        return (int)ans;
    }
    int countGoodNumbers(long long n) {
        long long ans = pow(5, (n + 1)/2);
        long long ansd = pow(4, (n)/2);
        return ((ans * ansd) % MOD);
    }
};
