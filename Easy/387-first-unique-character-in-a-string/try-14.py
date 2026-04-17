/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 14
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 09:16:11
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution:
    def firstUniqChar(self, s: str) -> int:
        c=Counter(s)
        for i in range(len(s)):
            if c[s[i]]==1:
                return i
        return -1
