/*
 * Problem #368: Largest Divisible Subset
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/03/2026, 10:58:54
 * Link: https://leetcode.com/problems/largest-divisible-subset/
 */

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> dp(n);
        for(int i = n - 1; i >= 0; i--){
            int nextInd = -1;
            for(int j = i + 1; j < n; j++){
                if(nums[j] % nums[i] == 0){
                    if(nextInd == -1 || (int)dp[nextInd].size() < (int)dp[j].size()){
                        nextInd = j;
                    }
                }
            }
            if(nextInd == -1) dp[i] = {nums[i]};
            else {
                dp[i] = dp[nextInd];
                dp[i].push_back(nums[i]);
            }
        }
        int ans = 0;
        for(int i = 0;i < n; i++){
            ans = max(ans, (int)dp[i].size());
        }

        for(int i = 0;i < n; i++){
            if((int)dp[i].size() == ans) return dp[i];
        }
        return {1};
        
    }
};
