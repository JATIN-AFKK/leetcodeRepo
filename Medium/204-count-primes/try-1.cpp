/*
 * Problem #204: Count Primes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 17:25:45
 * Link: https://leetcode.com/problems/count-primes/
 */

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isprime(n + 1, true);
        isprime[0] = isprime[1] = false;
        for(int i = 2; i * i <= n; i++){
            if(isprime[i]){
                for(int j = i * i; j <= n; j += i){
                    isprime[j] = false;
                }
            }
        }
        int ans = count(isprime.begin(), isprime.end(), true);
        return ans - isprime[n];
    }
};
