/*
 * Problem #238: Product of Array Except Self
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 14/12/2024, 19:40:35
 * Link: https://leetcode.com/problems/product-of-array-except-self/
 */

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l1=[1]
        p=1

        for i in range(len(nums)-1):
            p=p*nums[i]
            l1.append(p)
        p=1
        
        for i in range(len(nums)-1,-1,-1):
            l1[i]=l1[i]*p
            p=p*nums[i]

        return l1
            



        
