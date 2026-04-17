/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 10
 * status: Accepted
 * Language: python3
 * Date: 02/12/2024, 19:05:37
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left = 0 #Buy
        right = 1 #Sell
        max_profit = 0
        while right < len(prices):
            currentProfit = prices[right] - prices[left] #our current Profit
            if prices[left] < prices[right]:
                if(max_profit<currentProfit):
                    max_profit =currentProfit
            else:
                left = right
            right += 1
        return max_profit

        

            

        
