/*
 * Problem #3652: Best Time to Buy and Sell Stock using Strategy
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 20:34:08
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-using-strategy/
 */

class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        long long ans = 0;
        long long secondHalf = 0, curProfit = 0;

        for(int i = k/2; i < k;i++) secondHalf += prices[i];

        int l = 0;
        for(int e = 0;e < n;e++){
            curProfit += prices[e] * strategy[e];
            if(e >= k) secondHalf += prices[e];


            if(e - l + 1 < k) continue;

            cout << curProfit << " " << secondHalf;
            ans = max(ans, secondHalf - curProfit);
            secondHalf -= prices[l + k/2];
            
            curProfit -= prices[l] * strategy[l]; 
            l++;
        }
        long long total = 0;
        for(int i = 0;i < n;i++) total += prices[i] * strategy[i];
        return total + ans;


    }
};
