/*
 * Problem #1930: Unique Length-3 Palindromic Subsequences
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 21:13:46
 * Link: https://leetcode.com/problems/unique-length-3-palindromic-subsequences/
 */

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> pre(26, -1), suf(26, -1);
        int n = s.size();
        int ans = 0;
        for(int i = 0;i < n; i++){
            suf[s[i] - 'a'] = i;
            if(pre[s[i] - 'a'] == -1) pre[s[i] - 'a'] = i;
        }
        for(int i = 0;i < 26; i++){
            char ch = 'a' + i;
            vector<bool> seen(26, false);
            if(pre[i] == -1 || suf[i] == -1) continue;
            for(int j = pre[i] + 1; j < suf[i]; j++){
                seen[s[j] - 'a'] = true;
            }
            ans += count_if(seen.begin(), seen.end(), [](bool a){ return a; });
        }
        return ans;
    }
};
