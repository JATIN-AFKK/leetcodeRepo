/*
 * Problem #1475: Final Prices With a Special Discount in a Shop
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 18/12/2024, 17:25:17
 * Link: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
 */

class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        re = []
        for i in range(len(prices)):
            found = False
            for j in range(i+1,len(prices)):
                if prices[i]>=prices[j] :
                    re.append(prices[i]-prices[j])
                    found = True
                    break
            
            if found == False :
                re.append(prices[i])

        return re
            
        
