/*
 * Problem #189: Rotate Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/01/2025, 18:23:23
 * Link: https://leetcode.com/problems/rotate-array/
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int d = k % n;
        reverse(nums.begin(),nums.begin() + n-d);
        reverse(nums.begin()+n-d,nums.end());
        reverse(nums.begin(),nums.end());
    }
};
