/*
 * Problem #122: Best Time to Buy and Sell Stock II
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 05/08/2025, 14:04:48
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r=0;
        for(int i = 0;i < prices.size()-1;i++){
            r += max(0, prices[i+1]-prices[i]);
            
        }
        return r;
    }
};
