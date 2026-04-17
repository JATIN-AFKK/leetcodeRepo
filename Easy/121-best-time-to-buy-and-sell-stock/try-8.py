/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 8
 * status: Accepted
 * Language: python3
 * Date: 02/12/2024, 19:02:00
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        L=0
        R=1
        M=0
        while(R<len(prices)):
            dif=prices[R]-prices[L]
            if(prices[L]>prices[R]):
                L=R
            else:
                M=max(M,dif)
            R+=1
        return M

        

            

        
