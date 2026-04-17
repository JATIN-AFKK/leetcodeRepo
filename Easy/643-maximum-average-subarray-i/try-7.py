/*
 * Problem #643: Maximum Average Subarray I
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 12:33:35
 * Link: https://leetcode.com/problems/maximum-average-subarray-i/
 */

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        window=0
        for i in range(k):
            window+=nums[i]
        
        mx=window
        for i in range(k,len(nums)):
            mx=max(mx,window:=(window+nums[i]-nums[i-k]))
        return mx/k

