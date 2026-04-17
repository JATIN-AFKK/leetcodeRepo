/*
 * Problem #162: Find Peak Element
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 18/12/2024, 16:43:44
 * Link: https://leetcode.com/problems/find-peak-element/
 */

class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        left=0
        right=len(nums)-1
        if right == 0 :
            return 0
        if (nums[0] > nums[1]):
            return 0
        if (nums[right] > nums[right-1]):
            return right

        while(left < right):
            mid = (right + left)//2
            
            if nums[mid] > nums[mid + 1] and nums[mid] > nums[mid - 1] :
                return mid
            
            if nums[mid] < nums[mid + 1]:
                left = mid +1
            else :
                right = mid
        

        
