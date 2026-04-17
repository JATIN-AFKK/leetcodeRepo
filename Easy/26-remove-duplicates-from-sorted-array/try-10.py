/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 10
 * status: Accepted
 * Language: python3
 * Date: 30/11/2024, 12:29:22
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        j=1
        for i in range(1,len(nums)):
            if(nums[i]!=nums[i-1]):
                nums[j]=nums[i]
                j=j+1
        return j

