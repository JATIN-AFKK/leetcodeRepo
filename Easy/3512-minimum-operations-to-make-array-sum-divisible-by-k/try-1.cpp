/*
 * Problem #3512: Minimum Operations to Make Array Sum Divisible by K
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 23:37:44
 * Link: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
 */

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        return total % k;
    }
};
