/*
 * Problem #643: Maximum Average Subarray I
 * Difficulty: Easy
 * Submission: Try 8
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 12:35:54
 * Link: https://leetcode.com/problems/maximum-average-subarray-i/
 */

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        window=0
        for i in range(len(nums)):
            if i<k:
                window+=nums[i]
                mx=window
            else:
                mx=max(mx,window:=(window+nums[i]-nums[i-k]))
        return mx/k

