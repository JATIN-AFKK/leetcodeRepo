/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 15:09:01
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        h1=set(nums1)
        h2=set(nums2)
        return list(h2.intersection(h1))
        
