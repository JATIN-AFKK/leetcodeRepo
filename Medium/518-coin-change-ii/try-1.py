/*
 * Problem #518: Coin Change II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 09/01/2025, 23:28:24
 * Link: https://leetcode.com/problems/coin-change-ii/
 */

class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        l1 = [1]+[0]*(amount)
        for coin in coins:
            for i in range(len(l1)):
                if i-coin>=0:
                    l1[i]+=l1[i-coin]
        return l1[-1]
