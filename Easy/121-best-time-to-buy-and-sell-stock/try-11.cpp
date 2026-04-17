/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 11
 * status: Accepted
 * Language: cpp
 * Date: 02/12/2024, 19:14:57
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=0,m=0,i;
        for(i=1;i<prices.size();i++){
            s+=prices[i]-prices[i-1];
            if(s<0)
            s=0;
            else if(s>m)
            m=s;
        }
        return m;
    }
};
