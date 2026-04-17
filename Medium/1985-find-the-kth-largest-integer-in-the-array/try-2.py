/*
 * Problem #1985: Find the Kth Largest Integer in the Array
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 01/01/2025, 18:50:33
 * Link: https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
 */

class Solution:
    def kthLargestNumber(self, nums: List[str], k: int) -> str:
        l1 = [-int(x) for x in nums]
        heapify(l1)
        for i in range(k-1):
            heappop(l1)
        return str(-heappop(l1))
