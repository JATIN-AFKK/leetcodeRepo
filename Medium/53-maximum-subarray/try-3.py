/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 13/12/2024, 15:19:18
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        mx=-float('inf')
        s=0
        for i in nums:
            s+=i
            mx=max(s,mx)
            if(s<0):
                s=0
        return mx

        
