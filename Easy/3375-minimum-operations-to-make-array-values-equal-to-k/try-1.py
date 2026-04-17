/*
 * Problem #3375: Minimum Operations to Make Array Values Equal to K
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 08/12/2024, 10:08:31
 * Link: https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/
 */

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        a=min(nums)
        h=set(nums)
        if (k>a):
            return -1
        elif (k==a):
            return len(h)-1
        else:
            return len(h)
        
