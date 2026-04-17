/*
 * Problem #1696: Jump Game VI
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2025, 16:41:59
 * Link: https://leetcode.com/problems/jump-game-vi/
 */

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        deque<int> dq;
        dq.push_back(1);
        vector<int> dp(nums.size() + 1, 0);
        dp[1] = nums[0];
        for(int r = 2;r <= nums.size(); r++){
            if(dq.front() < r - k) dq.pop_front();
            dp[r] = nums[r - 1] + dp[dq.front()];
            while(!dq.empty() && dp[dq.back()] < dp[r]){
                dq.pop_back();
            }
            dq.push_back(r);
        }
        return dp[nums.size()];
    }
};
