/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 11
 * status: Accepted
 * Language: python3
 * Date: 30/11/2024, 12:32:48
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        j=0
        for i in range(len(nums)):
            if(nums[j]!=nums[i]):
                nums[j:=j+1]=nums[i]
        return j+1

