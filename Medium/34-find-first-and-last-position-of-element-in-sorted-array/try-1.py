/*
 * Problem #34: Find First and Last Position of Element in Sorted Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 18/12/2024, 14:55:57
 * Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 */

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = 0
        right = len(nums) -1
        if right == -1 :
            return [-1,-1]

        while(left < right):
            mid = (left + right)//2
            if( nums[mid] < target):
                left = mid + 1
            else :
                right = mid

        if nums[left] == target :
            re = [left]
        else:
            return [-1,-1]


        left=0
        right = len(nums)

        while(left < right):
            mid = (left + right)//2
            if( nums[mid] <= target):
                left = mid+1
            else:
                right = mid
        re.append(right-1)
        return re

        
        

        
