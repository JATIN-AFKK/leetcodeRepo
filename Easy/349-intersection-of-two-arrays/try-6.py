/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 15:06:00
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        h1=set()
        h2=set()
        l1=[]

        for i in nums1:
            h1.add(i)
        for i in nums2:
            h2.add(i)

        for i in h1:
            if i in h2:
                l1.append(i)

        return l1

        
