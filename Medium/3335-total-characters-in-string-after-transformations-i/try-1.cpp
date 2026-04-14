/*
 * Problem #3335: Total Characters in String After Transformations I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2026, 17:28:40
 * Link: https://leetcode.com/problems/total-characters-in-string-after-transformations-i/
 */

class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        array<long long, 26> count = {};
        for(char ch : s) count[ch - 'a']++;
        int MOD = 1e9 + 7;

        while(t--){
            long long last = count[25];
            for(int i = 24;i >= 0;i--) count[i + 1] = count[i];

            count[0] = last;
            count[1] += last;

            count[1] %= MOD;
        }

        long long ans = 0;
        for(long long f : count){
            ans += (f % MOD);
            ans %= MOD;
        }
        return ans;
    }
};
