/*
 * Problem #238: Product of Array Except Self
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 14/12/2024, 19:20:39
 * Link: https://leetcode.com/problems/product-of-array-except-self/
 */

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l1=[]
        p=1

        for i in nums:
            p=p*i
        
        for i in range(len(nums)) :

            if (nums[i]!=0):
                l1.append(int(p/nums[i]))
            else :
                pp=1
                for j in range(len(nums)):
                    if (j!=i):
                        pp=pp*nums[j]
                l1.append(pp)

        return l1


        
