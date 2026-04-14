/*
 * Problem #3881: Direction Assignments with Exactly K Visible People
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 20:34:52
 * Link: https://leetcode.com/problems/direction-assignments-with-exactly-k-visible-people/
 */

class Solution {
public:
    int MOD = 1000000007;
    int f(int a, int pow){
        long long base = a;
        long long result = 1;
        while(pow){
            if(pow & 1) result = (result * base) % MOD;
            base = (base * base) % MOD;
            pow /= 2;
        }
        return result;
    }
    int countVisiblePeople(int n, int pos, int k) {
        if(n - 1 < k) return 0;
        else if(n - 1 == k) return 2;

        long long a = 1; // n - k - 1 c 0;
        for(int i = 1;i <= k; i++){
            a = a * (n - k - 1 + i);
            a %= MOD;
            
            a  = a * f(i, MOD - 2);
            a %= MOD;
        }
        return (2*a) % MOD;
    }
};
