/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 02/12/2024, 18:34:36
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        m=s=0
        for i in range(1,len(prices)):
            if((s:=s+prices[i]-prices[i-1])<0):
                s=0
            elif s>m:
                m=s

        return m

            

        
