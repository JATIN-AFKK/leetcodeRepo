/*
 * Problem #1929: Concatenation of Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 12:28:52
 * Link: https://leetcode.com/problems/concatenation-of-array/
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec = nums;

        for(int i = 0;i < n;i++) vec.push_back(nums[i]);
        return vec;
    }
};
