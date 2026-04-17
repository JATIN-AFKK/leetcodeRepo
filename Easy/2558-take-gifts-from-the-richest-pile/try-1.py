/*
 * Problem #2558: Take Gifts From the Richest Pile
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 12/12/2024, 22:15:27
 * Link: https://leetcode.com/problems/take-gifts-from-the-richest-pile/
 */

class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        for i in range(0,k):
            gifts.sort()
            gifts[-1]=floor(sqrt(gifts[-1]))
        
        return sum(gifts[:])

