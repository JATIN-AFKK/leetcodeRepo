/*
 * Problem #3138: Minimum Length of Anagram Concatenation
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 23/02/2026, 20:01:12
 * Link: https://leetcode.com/problems/minimum-length-of-anagram-concatenation/
 */

class Solution {
public:
    int minAnagramLength(string s) {
        int n = s.size();
        for(int k = 1;k <= n/2;k++){
            if(n % k != 0) continue;
            bool ans = true;

            array<int, 26> pre = {};
            array<int, 26> cur = {};

            for(int i = 0;i < k;i++) pre[s[i] - 'a']++;

            int j = k;
            while(j < n){
                for(int count = 0;count < k;count++) cur[s[j++]-'a']++;
                if(pre != cur){
                    ans = false;
                    break;
                }
                cur = {};
            }
            if(ans) return k;

        }
        return n;
    }
};
