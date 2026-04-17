/*
 * Problem #122: Best Time to Buy and Sell Stock II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/03/2025, 23:48:37
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> vec;
        int great = 0;
        for(int i = 1;i < prices.size();i++){
            vec.push_back(prices[i] - prices[i-1]);
        }
        for(auto i : vec){
            if(i > 0){
                great += i;
            }

        }
        return great;
    }
};
