/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 18
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 16:13:54
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d={}
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        
        for i in t:
            if i not in d:
                return False
            else:
                d[i]-=1
                if d[i]<0:
                    return False
            
        for i in d:
            if d[i]!=0 :
                return False

        return True
        
        
