/*
 * Problem #215: Kth Largest Element in an Array
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 18:59:17
 * Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
 */

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap=[-x for x in nums]
        heapify(heap)
        for i in range(k-1):
            heappop(heap)
        return -heappop(heap)
        
