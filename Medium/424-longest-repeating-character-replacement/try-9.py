/*
 * Problem #424: Longest Repeating Character Replacement
 * Difficulty: Medium
 * Submission: Try 9
 * status: Accepted
 * Language: python3
 * Date: 23/12/2024, 14:55:34
 * Link: https://leetcode.com/problems/longest-repeating-character-replacement/
 */

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        c = Counter()
        i = 0
        mx=0
        re =0
        for e in range(len(s)):
            c[s[e]]+=1
            mx = max( mx , c[s[e]])
            while( e-i+1-mx >k):
                c[s[i]]-=1
                i+=1
                mx = max( mx , c[s[i]])

            re=max(re,e-i+1)
        return re
            


        
