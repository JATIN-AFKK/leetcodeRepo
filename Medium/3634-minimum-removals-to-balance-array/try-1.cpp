/*
 * Problem #3634: Minimum Removals to Balance Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 19:43:57
 * Link: https://leetcode.com/problems/minimum-removals-to-balance-array/
 */

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int l = 0, ans = INT_MIN;
        for(int e = 0;e < nums.size(); e++){
            while ((long long)nums[e] > (long long) nums[l]*k) l++;
            ans = max(ans, e - l + 1);
        }
        return nums.size() - ans;
    }
};
