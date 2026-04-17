/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 8
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 15:10:50
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        for value in nums1:
            if value in nums2:
                ans.append(value)
        for value in nums2:
            if value in nums1:
                ans.append(value)
        temp = []
        for value in ans:
            if value not in temp:
                temp.append(value)
        
        return temp

        return list(num_ans)
        
