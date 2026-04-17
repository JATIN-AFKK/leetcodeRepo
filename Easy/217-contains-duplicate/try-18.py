/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 18
 * status: Accepted
 * Language: python3
 * Date: 04/12/2024, 16:23:55
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        d={}
        for i in nums:
            if i in d :
                return True
            d[i]=1
        return False
