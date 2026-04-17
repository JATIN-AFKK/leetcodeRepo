/*
 * Problem #1: Two Sum
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: python3
 * Date: 23/11/2024, 13:38:44
 * Link: https://leetcode.com/problems/two-sum/
 */

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map={}
        for i in range(len(nums)):
            comp=target-nums[i]
            if comp in map:
                return [map[comp],i]
            map[nums[i]]=i
        return []
        
