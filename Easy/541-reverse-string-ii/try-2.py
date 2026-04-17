/*
 * Problem #541: Reverse String II
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 11/12/2024, 14:39:41
 * Link: https://leetcode.com/problems/reverse-string-ii/
 */

class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        sl = list(s)
        for i in range(0, len(sl), 2 * k):
            endn = min(i + k, len(sl))

            for j in range((endn - i) // 2): 
                sl[i + j], sl[endn - j - 1] = sl[endn - j - 1], sl[i + j] 
                
        return ''.join(sl) 

