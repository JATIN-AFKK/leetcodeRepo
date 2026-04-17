/*
 * Problem #1929: Concatenation of Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 12:36:15
 * Link: https://leetcode.com/problems/concatenation-of-array/
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(2*n);

        for(int i = 0;i < 2*n;i++) vec[i] = nums[i%n];
        return vec;
    }
};
