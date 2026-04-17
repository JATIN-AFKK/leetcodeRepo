/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 13
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 15:59:38
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d1={}
        d2={}
        for i in s:
            if i not in d1:
                d1[i]=0
            else:
                d1[i]+=1
        
        for i in t:
            if i not in d2:
                d2[i]=0
            else:
                d2[i]+=1
        
        return d1==d2
        
        
