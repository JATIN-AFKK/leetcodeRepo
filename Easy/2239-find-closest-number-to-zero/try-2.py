/*
 * Problem #2239: Find Closest Number to Zero
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 13/12/2024, 05:44:52
 * Link: https://leetcode.com/problems/find-closest-number-to-zero/
 */

class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        mx=float('inf')
        for i in nums:
            if (abs(mx)>abs(i)):
                mx=i
            elif((abs(mx)==abs(i)) and i+mx==0 and i>mx):
                mx=i
            
            
        return mx
            

