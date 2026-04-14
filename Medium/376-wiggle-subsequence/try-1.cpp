/*
 * Problem #376: Wiggle Subsequence
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/04/2026, 16:04:04
 * Link: https://leetcode.com/problems/wiggle-subsequence/
 */

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> dp(nums.size(), {1, 1});
        for(int i = n - 1; i >= 0;i--){
            for(int j = i + 1; j < n; j++){
                if(nums[j] > nums[i]) dp[i].first = max(dp[j].second + 1, dp[i].first);
                if(nums[j] < nums[i]) dp[i].second = max(dp[j].first + 1, dp[i].second);
            }
        }
        int ans = 1;
        for(int i = 0;i < n; i++){
            ans = max({ans, dp[i].first, dp[i].second});
        }
        return ans;
    }
};
