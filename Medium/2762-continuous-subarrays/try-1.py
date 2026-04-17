/*
 * Problem #2762: Continuous Subarrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 14/12/2024, 18:06:12
 * Link: https://leetcode.com/problems/continuous-subarrays/
 */

from collections import deque

class Solution:
    def continuousSubarrays(self, nums: List[int]) -> int:
        n = len(nums)
        maxDeque = deque()  
        minDeque = deque() 
        start = 0 
        count = 0
        
        for end in range(n):
            while maxDeque and nums[maxDeque[-1]] <= nums[end]:
                maxDeque.pop()
            maxDeque.append(end)
            
            while minDeque and nums[minDeque[-1]] >= nums[end]:
                minDeque.pop()
            minDeque.append(end)
            
            while nums[maxDeque[0]] - nums[minDeque[0]] > 2:
                start += 1
                if maxDeque[0] < start:
                    maxDeque.popleft()
                if minDeque[0] < start:
                    minDeque.popleft()
        
            count += end - start + 1
        return count

