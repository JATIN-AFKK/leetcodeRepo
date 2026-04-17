/*
 * Problem #643: Maximum Average Subarray I
 * Difficulty: Easy
 * Submission: Try 11
 * status: Accepted
 * Language: python3
 * Date: 07/12/2024, 12:46:44
 * Link: https://leetcode.com/problems/maximum-average-subarray-i/
 */

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        window=sum(nums[:k])
        mx=window
        for i in range(k,len(nums)):
            window=window+nums[i]-nums[i-k]
            if mx<window:
                mx=window
        return mx/k
        
