/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 20
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 16:25:19
 * Link: https://leetcode.com/problems/valid-anagram/
 */


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        d1 = {}
        for i in s:
            if i not in d1:
                d1[i] = 1
            else:
                d1[i] += 1

        for i in t:
            if i in d1:
                d1[i] -= 1
                if d1[i] < 0:
                    return False
            else:
                return False

        return all(value == 0 for value in d1.values())

