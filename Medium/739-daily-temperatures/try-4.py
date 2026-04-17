/*
 * Problem #739: Daily Temperatures
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: python3
 * Date: 22/12/2024, 22:22:04
 * Link: https://leetcode.com/problems/daily-temperatures/
 */

@cache
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        re = []
        
        for i in range(len(temperatures)-1,-1,-1):
            while stack and temperatures[stack[-1]]<=temperatures[i] :
                stack.pop()
            if stack:
                re.append(stack[-1]-i)
            else :
                re.append(0)
            stack.append(i)
        
        return re[::-1]
