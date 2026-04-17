/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 14
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2025, 23:59:07
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0,mini = prices[0];
        for(auto i : prices){
            maxi = max(maxi,i - mini);
            mini = min(mini,i);
        }
        return maxi;
    }
};
