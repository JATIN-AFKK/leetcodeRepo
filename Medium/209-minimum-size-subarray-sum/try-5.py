/*
 * Problem #209: Minimum Size Subarray Sum
 * Difficulty: Medium
 * Submission: Try 5
 * status: Accepted
 * Language: python3
 * Date: 23/12/2024, 14:12:03
 * Link: https://leetcode.com/problems/minimum-size-subarray-sum/
 */

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        s=0
        i=0
        mx=float('inf')
        for e in range(len(nums)):
            s+=nums[e]
            while(s>=target):
                mx = min( mx, e-i+1)
                s -= nums[i]
                i+=1
        
        return 0 if mx == float('inf') else mx
            

            
            




            


        
