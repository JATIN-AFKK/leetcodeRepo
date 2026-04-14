/*
 * Problem #164: Maximum Gap
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 12:53:19
 * Link: https://leetcode.com/problems/maximum-gap/
 */

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if((int)nums.size() <= 1) return 0;

        int ans = INT_MIN;
        for(int i = 1;i < nums.size(); i++) ans = max(ans, nums[i] - nums[i - 1]);
        return ans;
    }
};
