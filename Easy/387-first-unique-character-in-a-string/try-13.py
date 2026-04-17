/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 13
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 09:11:14
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution:
    def firstUniqChar(self, s: str) -> int:
        l1=[0]*26
        for i in s:
            l1[ord(i)-ord('a')]+=1
        for i in range(len(s)):
            if(l1[ord(s[i])-ord('a')]==1):
                return i
        return -1      
