/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 14
 * status: Accepted
 * Language: python3
 * Date: 14/12/2024, 19:10:47
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
            if(e-start+1>mx):
                mx=e-start+1
        
        return mx
