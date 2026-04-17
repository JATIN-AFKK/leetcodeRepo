/*
 * Problem #215: Kth Largest Element in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 18:55:10
 * Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
 */

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap=[-x for x in nums]
        heapify(heap)
        for i in range(k):
            kth=heappop(heap)
        return -kth
        
