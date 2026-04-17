/*
 * Problem #424: Longest Repeating Character Replacement
 * Difficulty: Medium
 * Submission: Try 6
 * status: Accepted
 * Language: python3
 * Date: 08/12/2024, 16:58:55
 * Link: https://leetcode.com/problems/longest-repeating-character-replacement/
 */

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        d={}
        mx=0
        start=0
        re=0
        for end in range(len(s)):
            if s[end] in d:
                d[s[end]]+=1
            else:
                d[s[end]]=1
            mx=max(mx,d[s[end]])
            while(end-start+1-mx>k):
                d[s[start]]-=1
                start+=1
            
            re=max(re,end-start+1)
        return re
        
