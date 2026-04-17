/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 9
 * status: Accepted
 * Language: python3
 * Date: 30/11/2024, 12:24:20
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        j=0
        for i in range(len(nums)):
            if(nums[j]!=nums[i]):
                j+=1
                nums[j]=nums[i]
        return j+1

        
