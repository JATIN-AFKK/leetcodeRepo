/*
 * Problem #2009: Minimum Number of Operations to Make Array Continuous
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 10:39:50
 * Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/
 */

class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int ans = 0;

        int l = 0, count = 0;
        for(int e = 0;e < nums.size(); e++){
            int end = nums[e] + n - 1;
            int j = upper_bound(nums.begin(), nums.end(), end) - nums.begin();
            ans = max(ans, j - e);
        }
        return n - ans;
    }
};
