/*
 * Problem #739: Daily Temperatures
 * Difficulty: Medium
 * Submission: Try 7
 * status: Accepted
 * Language: python3
 * Date: 22/12/2024, 22:33:54
 * Link: https://leetcode.com/problems/daily-temperatures/
 */

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        n = len(temperatures)
        re = [0]*n
        
        for i in range(n-1,-1,-1):
            while stack and temperatures[stack[-1]]<=temperatures[i] :
                stack.pop()
            re[i] = stack[-1] - i if stack else 0
            stack.append(i)
        return re
