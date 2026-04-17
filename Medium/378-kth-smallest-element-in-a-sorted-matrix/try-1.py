/*
 * Problem #378: Kth Smallest Element in a Sorted Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 19:35:37
 * Link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
 */

class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        l1=[]
        for nest in matrix:
            l1.extend(nest)
        heapify(l1)
        for i in range(k-1):
            heappop(l1)
        return heappop(l1)
        
