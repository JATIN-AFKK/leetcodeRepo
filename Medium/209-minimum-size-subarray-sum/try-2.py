/*
 * Problem #209: Minimum Size Subarray Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 08/12/2024, 17:37:59
 * Link: https://leetcode.com/problems/minimum-size-subarray-sum/
 */

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        start=0
        s=0
        mx=float('inf')
        for e in range(len(nums)):
            s=s+nums[e]
            while(s>=target):
                if (e-start+1<mx):
                    mx=e-start+1
                
                s-=nums[start]
                start+=1
        return 0 if mx==float('inf') else mx

