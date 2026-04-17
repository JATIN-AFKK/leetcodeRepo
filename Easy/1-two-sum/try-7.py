/*
 * Problem #1: Two Sum
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: python3
 * Date: 23/11/2024, 13:50:57
 * Link: https://leetcode.com/problems/two-sum/
 */

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map={}
        for i in range(len(nums)):
            map[nums[i]]=i
        
        for i in range(len(nums)):
            comp=target-nums[i]
            if comp in map and i!=map[comp]:
                return [i,map[comp]]
        return []

        
