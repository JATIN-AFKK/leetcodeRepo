/*
 * Problem #378: Kth Smallest Element in a Sorted Matrix
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 19:51:38
 * Link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
 */

class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        heap=[(matrix[i][0],i,0) for i in range(len(matrix))]
        heapify(heap)
        for _ in range(k-1):
            val , row ,col = heappop(heap)
            if col+1<len(matrix):
                heappush(heap,(matrix[row][col+1],row,col+1))
        
        return heappop(heap)[0]
        
        
