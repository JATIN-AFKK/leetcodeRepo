/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 9
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 22:31:56
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        map=[0]*128
        end=0
        intial=0
        maximum=0
        for end in range(len(s)):
            map[ord(s[end])-ord('a')]+=1
            while(map[ord(s[end])-ord('a')]>1):
                map[ord(s[intial])-ord('a')]-=1
                intial+=1
            if(maximum<(end-intial+1)):
                maximum=end-intial+1
    
        return maximum
        
