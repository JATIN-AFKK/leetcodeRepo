/*
 * Problem #300: Longest Increasing Subsequence
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/03/2026, 11:05:39
 * Link: https://leetcode.com/problems/longest-increasing-subsequence/
 */

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n);
        for(int i = n - 1; i >= 0; i--){
            int restlen = 0;
            for(int j = i + 1;j < n; j++){
                if(nums[j] > nums[i]){
                    restlen = max(restlen, dp[j]);
                }
            }
            dp[i] = 1 + restlen;
        }
        return *max_element(dp.begin(), dp.end());

    }
};
