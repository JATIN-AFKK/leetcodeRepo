/*
 * Problem #2550: Count Collisions of Monkeys on a Polygon
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 12:40:45
 * Link: https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon/
 */

class Solution {
public:
    int MOD = 1e9 + 7;
    int pow(int x, int n){
        if(n == 1) return x;

        long long half = pow(x, n/2);
        long long sq = half*half;
        sq %= MOD;

        if(n % 2 == 0) return sq;
        return (sq * x) % MOD;
    }
    int monkeyMove(int n) {
        int ans = pow(2, n) - 2;
        return  (ans + MOD) % MOD;
    }
};
