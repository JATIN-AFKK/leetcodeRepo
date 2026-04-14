/*
 * Problem #1175: Prime Arrangements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 17:38:12
 * Link: https://leetcode.com/problems/prime-arrangements/
 */

class Solution {
public:
    int MOD = 1e9 + 7;
    long long fact(int a){
        long long ans = 1;
        for(int i = 2; i <= a; i++){
            ans *= i;
            ans %= MOD;
        }
        return ans;
    }
    int numPrimeArrangements(int n) {
        vector<bool> isprime(n + 1, true);
        isprime[0] = isprime[1] = false;
        for(int i = 2; i * i <= n; i++){
            if(isprime[i]){
                for(int j = i*i; j <= n; j += i){
                    isprime[j] = false;
                }
            }
        }
        int primeCount = count(isprime.begin(), isprime.end(), true);
        int nonprime = n - primeCount;
        return (fact(nonprime) * fact(primeCount)) % MOD;
    }
};
