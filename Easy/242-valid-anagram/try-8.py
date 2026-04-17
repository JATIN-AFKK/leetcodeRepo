/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 8
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 15:47:36
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s)==sorted(t)
        
