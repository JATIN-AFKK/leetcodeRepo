/*
 * Problem #1969: Minimum Non-Zero Product of the Array Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 12:10:51
 * Link: https://leetcode.com/problems/minimum-non-zero-product-of-the-array-elements/
 */

class Solution {
public:
    int MOD = 1e9 + 7;
    int pow(int x, long long n){
        long long ans = 1;
        long long power = x;
        while(n){
            if((n & 1) == 1) ans *= power;
            power *= power;

            power %= MOD;
            ans %= MOD;

            n = (n >> 1);
        }
        return ans;
    }
    int minNonZeroProduct(int p) {
        if(p == 1) return 1;
        long long n = (1ll << (p - 1)) - 1;
        long long x = (1ll << (p)) - 2;

        x %= MOD;

        long long a = ((1ll << p) - 1) % MOD;
        long long b = pow(x, n);

        return (a * b) % MOD;

    }
};
