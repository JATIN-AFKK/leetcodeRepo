/*
 * Problem #611: Valid Triangle Number
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 00:30:39
 * Link: https://leetcode.com/problems/valid-triangle-number/
 */

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0;i < n; i++){
            for(int j = i + 1; j < n; j++){
                int a = nums[i], b = nums[j];
                int ld = lower_bound(nums.begin() + j + 1, nums.end(), b + a) - nums.begin();
                ans += ld - j - 1;
            }
        }
        return ans;
        // a + b > c > b - a
    }
};
