/*
 * Problem #2779: Maximum Beauty of an Array After Applying Operation
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 11/12/2024, 12:18:51
 * Link: https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/
 */

class Solution:
    def maximumBeauty(self, nums: List[int], k: int) -> int:
        nums.sort()
        start=0
        mx=0
        for end in range(len(nums)):
            while(nums[end]-nums[start]>2*k):
                start+=1
            
            mx=max(mx,end-start+1)
        return mx
            
        
        
        

        
