/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 24
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 16:32:09
 * Link: https://leetcode.com/problems/valid-anagram/
 */


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d1={}
        d2={}
        if len(s)!=len(t):
            return False
        for i in s:
            d1[i]=1+(d1[i] if i in d1 else 0)
        for i in t:
            d2[i]=1+(d2[i] if i in d2 else 0)

        return d1==d2


