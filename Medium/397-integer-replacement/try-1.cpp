/*
 * Problem #397: Integer Replacement
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/04/2026, 12:05:09
 * Link: https://leetcode.com/problems/integer-replacement/
 */

class Solution {
public:
    unordered_map<long long,int> dp;
    int solve(long long n){
        if(n == 1) return 0;
        if(dp.count(n)) return dp[n];

        if(n % 2 == 0) return 1 + solve(n/2);
        return 1 + min(solve(n - 1), solve(n + 1));
    }
    int integerReplacement(int n) {
        return solve(n);
    }
};
