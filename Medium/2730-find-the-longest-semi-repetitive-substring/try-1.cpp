/*
 * Problem #2730: Find the Longest Semi-Repetitive Substring
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 01:05:00
 * Link: https://leetcode.com/problems/find-the-longest-semi-repetitive-substring/
 */

class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int ans = 1, adj = 0;

        int l = 0;
        for(int e = 1;e < s.size();e++){
            if(s[e] == s[e - 1]) adj++;

            while(adj > 1){
                if(s[l] == s[l+1]) adj--;
                l++;
            }

            ans = max(ans, e - l + 1);
        }
        return ans;
    }
};
