/*
 * Problem #2483: Minimum Penalty for a Shop
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2025, 22:47:39
 * Link: https://leetcode.com/problems/minimum-penalty-for-a-shop/
 */

class Solution {
public:
    int bestClosingTime(string customer) {
        int totalHour = customer.size();
        vector<int> open(totalHour + 1, 0), closed(totalHour + 1, 0);
        for(int i = 0;i < totalHour; i++){
            open[i + 1] += open[i] + ((customer[i] == 'Y')?0:1);
            closed[totalHour - i - 1] += closed[totalHour - i] + ((customer[totalHour - i - 1] == 'Y')?1:0);
        }
        int ans = 0, cost = INT_MAX;
        for(int i = 0;i <= totalHour ;i++){
            int curCost = closed[i] + open[i];
            if(curCost < cost){
                cost = curCost;
                ans = i;
            }
        }
        return ans;
    }
};
