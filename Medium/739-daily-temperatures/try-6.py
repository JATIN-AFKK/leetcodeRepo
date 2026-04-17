/*
 * Problem #739: Daily Temperatures
 * Difficulty: Medium
 * Submission: Try 6
 * status: Accepted
 * Language: python3
 * Date: 22/12/2024, 22:23:48
 * Link: https://leetcode.com/problems/daily-temperatures/
 */

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        re = []
        n = len(temperatures)
        for i in range(n-1,-1,-1):
            while stack and temperatures[stack[-1]]<=temperatures[i] :
                stack.pop()
            re.append(stack[-1] - i if stack else 0)
            stack.append(i)
        
        return re[::-1]
