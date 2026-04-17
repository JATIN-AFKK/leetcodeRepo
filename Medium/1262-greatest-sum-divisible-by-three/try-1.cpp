/*
 * Problem #1262: Greatest Sum Divisible by Three
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 22:14:17
 * Link: https://leetcode.com/problems/greatest-sum-divisible-by-three/
 */

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, 0);
        dp[1] = dp[2] = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            vector<int> ndp = dp;
            int x = nums[i];
            for(int j = 0;j < 3; j++){
                ndp[(x + j) % 3] = max(ndp[(x + j) % 3], dp[j] + x);
            }
            dp = ndp;

        }
        return dp[0];
    }
};
