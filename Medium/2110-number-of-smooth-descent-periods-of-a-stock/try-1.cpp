/*
 * Problem #2110: Number of Smooth Descent Periods of a Stock
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 20:07:50
 * Link: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
 */

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = 1;
        int l = 0;
        for(int e = 1;e < prices.size(); e++){
            if(prices[e - 1] - prices[e] != 1) l = e;
            ans += (e - l + 1);
            cout << ans << endl;
        }
        return ans;
    }
};
