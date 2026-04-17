/*
 * Problem #55: Jump Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 10/01/2025, 17:22:23
 * Link: https://leetcode.com/problems/jump-game/
 */

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        destination = len(nums)-1
        for i in range(len(nums)-2,-1,-1):
            if (destination - i)<=nums[i]:
                destination = i
        
        if destination == 0:
            return True 
        else :
            return False

