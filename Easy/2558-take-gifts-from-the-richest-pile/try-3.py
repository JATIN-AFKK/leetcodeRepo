/*
 * Problem #2558: Take Gifts From the Richest Pile
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 12/12/2024, 22:47:09
 * Link: https://leetcode.com/problems/take-gifts-from-the-richest-pile/
 */

class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        num = [-x for x in gifts]
        heapify(num)
        while k :
            t = int(sqrt(-heappop(num)))
            heappush(num,-t)
            k-=1
        return -sum(num)
