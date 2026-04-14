/*
 * Problem #3877: Minimum Removals to Achieve Target XOR
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 09:09:19
 * Link: https://leetcode.com/problems/minimum-removals-to-achieve-target-xor/
 */

class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        unordered_map<int, int> dp;
        dp[0] = 0;
        for(int num : nums){
            auto ndp = dp;
            for(auto &[x, cnt] : dp){
                int n_num = x ^ num;
                ndp[n_num] = max(ndp[n_num], cnt + 1);
            }
            dp = ndp;
        }

        if(dp.find(target) != dp.end()) return nums.size() - dp[target];
        return -1;
    }
};
