/*
 * Problem #198: House Robber
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 11/12/2024, 10:23:32
 * Link: https://leetcode.com/problems/house-robber/
 */

class Solution:
    def rob(self, nums: List[int]) -> int:
        l1 = []
        if len(nums) == 1:
            return nums[0]
        l1.extend([nums[0], max(nums[0], nums[1])])
        for i in range(2, len(nums)):
            l1.append(max(l1[i - 1], l1[i - 2] + nums[i]))
        return l1[len(nums) - 1]

