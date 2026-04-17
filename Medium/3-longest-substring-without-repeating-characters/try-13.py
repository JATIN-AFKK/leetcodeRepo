/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 13
 * status: Accepted
 * Language: python3
 * Date: 14/12/2024, 19:09:43
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        c=Counter()
        start=0
        mx=0
        for e in range(len(s)):
            c[s[e]]+=1
            while(c[s[e]]>1):
                c[s[start]]-=1
                start+=1
            mx=max(mx,e-start+1)
        
        return mx
