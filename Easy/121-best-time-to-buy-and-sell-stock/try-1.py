/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 02/12/2024, 18:28:26
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        m=s=0
        for i in range(1,len(prices)):
            s+=prices[i]-prices[i-1]
            if(s<0):
                s=0
            elif s>m:
                m=s

        return m

            

        
