/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 20
 * status: Accepted
 * Language: python3
 * Date: 04/12/2024, 16:25:06
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        d=set()
        for i in nums:
            if i in d :
                return True
            d.add(i)
        return False
