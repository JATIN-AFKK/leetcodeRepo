/*
 * Problem #35: Search Insert Position
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 17/12/2024, 22:37:26
 * Link: https://leetcode.com/problems/search-insert-position/
 */

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        if target > nums[-1]:
            return len(nums)
        while (left < right):
            mid = (left + right)//2
            if(nums[mid] < target):
                left = mid + 1
            else:
                right = mid 

        return left
        
