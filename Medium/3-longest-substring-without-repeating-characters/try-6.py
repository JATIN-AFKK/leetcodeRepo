/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 6
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 22:20:02
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        map=Counter()
        end=0
        intial=0
        maximum=0
        while(end<len(s)):
            map[s[end]]+=1
            while(map[s[end]]>1):
                map[s[intial]]-=1
                intial+=1
            maximum=max(maximum,end-intial+1)
            end+=1
        return maximum
        
