/*
 * Problem #213: House Robber II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/03/2026, 10:11:08
 * Link: https://leetcode.com/problems/house-robber-ii/
 */

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        else if(nums.size() == 2) return max(nums[0], nums[1]);

        int n = nums.size();
        int ans = INT_MIN;
        for(int j = 0;j < nums.size(); j++){
            vector<int> dp(n + 2);
            dp[0] = 0;
            dp[1] = 0;
            for(int i = 2;i <= n; i++){
                dp[i] = max(dp[i - 1], dp[i - 2] + nums[(i + j - 2) % n]);
            }
            ans = max({ans, dp[n], dp[n - 1]});
        }
        return ans;
    }
};
