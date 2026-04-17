/*
 * Problem #1422: Maximum Score After Splitting a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 01/01/2025, 16:16:34
 * Link: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
 */

class Solution:
    def maxScore(self, s: str) -> int:
        n = len(s)
        r_sum = 0
        for i in range(1, n):
            if s[i]== '1':
                r_sum+=1

        l_sum = 1 if s[0] == '0' else 0
        m = r_sum + l_sum
        for i in range(1,n-1):
            if s[i]=='1':
                r_sum=r_sum - 1
            else:
                l_sum+=1
            m = max(m , r_sum + l_sum)

        
        return m
        
