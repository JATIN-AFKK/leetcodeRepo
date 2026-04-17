/*
 * Problem #560: Subarray Sum Equals K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 14/12/2024, 18:55:38
 * Link: https://leetcode.com/problems/subarray-sum-equals-k/
 */

class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        c=0
        d={0:1}
        s=0
        for i in range(len(nums)):
            s=s+nums[i]
            if s not in d:
                d[s]=0
            if s-k in d:
                c+=d[s-k]
            d[s]+=1

                
        return c
            

        
