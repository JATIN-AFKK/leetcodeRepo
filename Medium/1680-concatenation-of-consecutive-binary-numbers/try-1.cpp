/*
 * Problem #1680: Concatenation of Consecutive Binary Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 00:01:17
 * Link: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
 */

class Solution {
public:
    int concatenatedBinary(int N) {
        long long ans = 0;
        int MOD = 1e9 + 7;

        for(int n = 1;n <= N;n++){
            int bits = 32 - __builtin_clz(n);
            while(bits){
                ans = (2*ans) % MOD;
                ans += (((n >> (bits - 1)) & 1) != 0);
                bits--;
            }
        }
        return ans;
    }
};
