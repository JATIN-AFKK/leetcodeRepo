/*
 * Problem #1425: Constrained Subsequence Sum
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2025, 16:03:51
 * Link: https://leetcode.com/problems/constrained-subsequence-sum/
 */

class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        vector<int> dp(nums.size() + 1, 0);
        deque<int> dq;
        dq.push_back(0);
        int ans = INT_MIN;
        for(int r = 1;r <= nums.size(); r++){
            if(dq.front() < r - k) dq.pop_front();
            dp[r] = nums[r-1] + max(0, dp[dq.front()]);
            ans = max(dp[r], ans);
            while(!dq.empty() && dp[dq.back()] < dp[r]){
                dq.pop_back();
            }
            dq.push_back(r);
        }
        return ans;
    }
};
