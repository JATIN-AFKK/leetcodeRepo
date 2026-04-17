/*
 * Problem #13: Roman to Integer
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 10/12/2024, 16:17:23
 * Link: https://leetcode.com/problems/roman-to-integer/
 */

class Solution:
    def romanToInt(self, s: str) -> int:
        d= {
        "I": 1,
        "V": 5, 
        "X": 10, 
        "L": 50,
        "C": 100,
        "D": 500, 
        "M": 1000
        }
    
        i=0
        nums=0
        while(i<len(s)):
            if i<len(s)-1:
                if (d[s[i+1]]-d[s[i]])>0 :
                    nums+=d[s[i+1]]-d[s[i]]
                    i+=2
                else:
                    nums+=d[s[i]]
                    i+=1
            
            else :
                nums+=d[s[i]]
                i+=1
        return nums




