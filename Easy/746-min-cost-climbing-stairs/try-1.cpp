/*
 * Problem #746: Min Cost Climbing Stairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/10/2025, 15:33:15
 * Link: https://leetcode.com/problems/min-cost-climbing-stairs/
 */

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        cost.push_back(0);
        cost.push_back(0);
        vector<int> dp(n + 2,INT_MAX);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 0;i < n;i++){
            dp[i+1] = min(dp[i+1],dp[i] + cost[i+1]);
            dp[i+2] = min(dp[i+2],dp[i] + cost[i+2]);
        }
        return min(dp[n],dp[n+1]);
    }
};
