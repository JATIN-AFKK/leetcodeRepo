/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 10
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 23:19:58
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution:
    def firstUniqChar(self, s: str) -> int:
        d={}
        for i in range(len(s)):
            if s[i] not in d:
                d[s[i]]=[i,1]
            else:
                d[s[i]][1]+=1
        
        for i in d:
            if d[i][1]==1:
                return d[i][0]
        
        return -1           
        
        
