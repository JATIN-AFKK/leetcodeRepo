/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 10
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 22:46:52
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        map={}
        start=0
        mx=0
        for end in range(len(s)):
            if s[end] in map and map[s[end]]>=start:
                start=map[s[end]]+1
            map[s[end]]=end
            mx=max(mx,end-start+1)
        return mx
