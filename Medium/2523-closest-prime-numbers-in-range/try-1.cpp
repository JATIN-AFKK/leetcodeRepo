/*
 * Problem #2523: Closest Prime Numbers in Range
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 17:53:02
 * Link: https://leetcode.com/problems/closest-prime-numbers-in-range/
 */

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isprime(right + 1, true);
        isprime[0] = isprime[1] = false;
        for(int i = 2; i * i <= right; i++){
            if(isprime[i]){
                for(int j = i * i; j <= right; j += i){
                    isprime[j] = false;
                }
            }
        }
        int ans = INT_MAX;
        int pre = -1;
        for(int cur = left; cur <= right; cur++){
            if(isprime[cur]){
                if(pre == -1){
                    pre = cur;
                    continue;
                }
                ans = min(ans, cur - pre);
                pre = cur;
            }
        }

        pre = -1;
        for(int cur = left; cur <= right; cur++){
            if(isprime[cur]){
                if(pre == -1){
                    pre = cur;
                    continue;
                }
                if(ans == cur - pre) return {pre, cur};
                pre = cur;
            }
        }
        return {-1,-1};
    }
};
